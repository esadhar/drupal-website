
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
  var body = document.body;
  var html = document.documentElement;

  var height = Math.max( body.scrollHeight, body.offsetHeight, html.clientHeight, html.scrollHeight, html.offsetHeight );
  // console.log('height', height);
  var ran, min, max;

  $('#leftsidebar, #rightsidebar').each(function(i, e){
    // console.log("e", e);
    // console.log('i', i);
    min = !i ? 5 : 7;
    max = !i ? 7 : 9;

    // switch (i) {
    //   case 0:
    //     min = 3;
    //     max = 5;
    //     break;
    //   case 1:
    //     min = 5;
    //     max = 7;
    //     break;
    //   case 2:
    //     min = 7;
    //     max = 9;
    //     break;
    // }
    // console.log('min = '+min+" | max = "+max);

    ran = (Math.random()*(max-min+1)+min)/10;
    // console.log("ran", ran);
    $(e).attr('data-top-bottom', 'margin-top:'+(height * ran)+'px');
  });


  var s = skrollr.init();

});