
Drupal.behaviors.init_theme = function (context) {
  // Growl-style system messages
  $('#messages-and-help > div.messages:not(.processed)')
    .addClass('processed')
    .each(function() {
      // If a message meets these criteria, we don't autoclose
      // - contains a link
      // - is an error or warning
      // - contains a lenghthy amount of text
      if ($('a', this).size() || $(this).is('.error') || $(this).is('.warning') || $(this).text().length > 100) {
        $(this).prepend("<span class='close'>X</span>");
        $('span.close', this).click(function() {
          $(this).parent().slideUp('fast');
        });
      }
      else {
        // This essentially adds a 3 second pause before hiding the message.
        $(this).animate({opacity:1}, 5000, 'linear', function() {
          $(this).slideUp('fast');
        });
      }
    });
};


jQuery(document).ready(function($) {

  // var $root = $("#root");
  // var rootHeight = ($root.height() && $root.offsetHeight() || 0);
  // setTimeout(function(){
    if (!$('body').is('.breakpoint-small')){

      var body = document.body;
      var html = document.documentElement;

      var height = Math.max( body.scrollHeight, body.offsetHeight, html.clientHeight, html.scrollHeight, html.offsetHeight );
      // console.log('height', height);
      var ran, min, max;

      $('#leftsidebar, #rightsidebar').each(function(i, e){

        min = !i ? 5 : 7;
        max = !i ? 7 : 9;
        ran = (Math.random()*(max-min+1)+min)/10;
        $(e)
          .attr('data-top-bottom', 'margin-top:'+(height * ran)+'px')
          .addClass('skrollable skrollable-before')
          .attr('data-top-bottom', "margin-top:0px")
          .attr('data-top', "margin-top:0px")
          .attr('data-anchor-target', "#root")
          .attr('data-smooth-scrolling', "off");
      });

      $('#main-bg')
        .attr("data-smooth-scrolling", "off")
        .attr("data-anchor-target", "#root")
        .attr("data-top-bottom", "width:115%; height:115%; margin-left:-5%; margin-top:-7%;")
        .attr("data-top","width:100%; height:100%; margin-left:0%; margin-top:0%;");

      var s = skrollr.init({
        skrollrBody:"root"
      });

    }
  // }, 100);

});