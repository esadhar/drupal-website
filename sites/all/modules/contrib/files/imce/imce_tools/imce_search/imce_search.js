imce.hooks.load.push(function() {
  imce.opAdd({
    name : 'search',
    title : 'Search',
    content : jQuery('#imce-search-form')
  });
  jQuery('#imce-search-form').submit(function() {
    jQuery('#imce-search-results div').html('Searching ' + ((imce.conf.dir == '.') ? 'all ' : imce.conf.dir + ' and sub') +'directories for ' + jQuery('#edit-imce-search-term').val());
    jQuery('#imce-search-results div').addClass('loading');
    var case_insensitive = 0;
    jQuery('#edit-imce-search-case:checked').each(function() { case_insensitive = 1; });
    jQuery.ajax({
      url: Drupal.settings.basePath + 'imce_search_callback/' + case_insensitive + '/' + encodeURI(imce.conf.dir + '/' + jQuery('#edit-imce-search-term').val()),
      type: 'GET',
      success: function(serverdata, status, xmlhttp) {
        data = eval('(' + serverdata + ')');
        var filelist = jQuery.map(data.files, function(fullpath, index) {
          var li = document.createElement('li');
          jQuery(li).click(function () {
            file = fullpath.substr(fullpath.lastIndexOf('/') + 1);
            dir = fullpath.substr(0, fullpath.lastIndexOf('/'));
                        imce.imceSearch.navigate(dir, file);
          }).css('cursor','pointer').addClass('link');
          if (index > 10) {
            jQuery(li).addClass('toggle');
          }
          jQuery(li).html(fullpath);
          return li;
        });
        jQuery('#imce-search-results ul').hide();
        jQuery('#imce-search-results ul').empty().append(filelist);
        jQuery('#imce-search-results ul li[class="toggle"]').hide();
        jQuery('#imce-search-results ul').show();
        jQuery('#imce-search-results div').html(data.search + '. ' + data.files.length + ' results found. ');
        if (data.files.length > 10) {
          var toggle =  document.createElement('a');
          jQuery(toggle).append('Show all');
          jQuery(toggle).toggle(function () {
              jQuery(this).html('Short list');
              jQuery('#imce-search-results ul li[class*="toggle"]').show();
            },
            function () {
              jQuery(this).html('Show all');
              jQuery('#imce-search-results ul li[class*="toggle"]').hide();
            }
          );
          jQuery('#imce-search-results div').append(toggle);
        }
        jQuery('#imce-search-results div').removeClass('loading');
      }
    });
    return false;
  });

    imce.hooks.list.push(function (row) {
        //look if there is file to highlight, and highlight it.
        if (typeof imce.imceSearch.file !== 'undefined' && imce.imceSearch.file === row.id) {
            if (imce.imceSearch.selectFile(imce.imceSearch.file)) {
                imce.imceSearch.file = false;
            }
        }
    });

    imce.imceSearch = {
        dirToNavigate: false,
        file: false,
        navigate : function (dir, file) {
            //first try to navigate to given dir..
            if (dir === imce.conf.dir || this.navigateToDir(dir)) {
                imce.dirActivate(dir);
                if (typeof file !== 'undefined') {
                    //try to highlight the file
                    if (!imce.imceSearch.selectFile(file)) {
                        //file highlighting not possible, cache and try later..
                        imce.imceSearch.file = file;
                    } else {
                        imce.imceSearch.file = false;
                        imce.imceSearch.dirToNavigate = false;
                    }
                }
                return;
            }
            // Navigation was not possible, (dir to navigate is uncached) have to try something else..
            var parentToNavigate = '.';
            // search in imce.tree for parents of given dir
            for (var key in imce.tree) {
                if (dir.indexOf(key) === 0) {
                    parentToNavigate = key;
                }
            }
            //navigate to latest found parent dir
            //save dir to navigate and file to use later
            imce.imceSearch.dirToNavigate = dir;
            if (typeof file !== 'undefined') imce.imceSearch.file = file;
            this.navigate(parentToNavigate);
            //when Ajax is finished
            jQuery(document).one('ajaxStop',function(){
                //look if we have childs to load and trigger navigate again.
                if (imce.imceSearch.dirToNavigate && imce.imceSearch.file) {
                    imce.imceSearch.navigate(imce.imceSearch.dirToNavigate,imce.imceSearch.file);
                } else if (imce.imceSearch.file && imce.imceSearch.selectFile(imce.imceSearch.file)){
                    imce.imceSearch.file = false;
                }
            });
            return;
        },
        navigateToDir: function (dir) {
            if (typeof imce.tree[dir] !== 'undefined' && imce.vars.navbusy !==  dir) {
                imce.navigate(dir);
                imce.dirActivate(dir);
                return true;
            }
            return false;
        },
        selectFile: function (fid) {
            //look if fid exists or already selected
            if (imce.selected[fid]) {
                //already selected, don't need to select it.
                return true;
            }
            if (imce.fids[fid] || jQuery('#' + fid).length) {
                //file is listed, can be selected
                imce.highlight(fid);
                return true;
            }
            return false;
        }
    };
});