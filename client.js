





// ********************** CLICK ME BUTTON ***********************
// now, let's do stuff to our button -- to do this, we need an event listener

// let's get the element that we want to "listen" for
var btnElement = document.getElementById("first-btn");

// now we want to attach an event listener to this element
// this is doing a few things:
// 1. Add the event listener to the greetingElement
// 2. We're "listening" for the 'click' event
// 3. When the button gets clicked, the function will be called

// so this is the general format (ps: there are more ways to do this!!!):
// element.addEventListener("event", callback function)

btnElement.addEventListener("click", function(){
  document.getElementById("btn-text").innerHTML = "you clicked me, thanks!";
});








// ********************** COLORFUL BUTTON ***********************
// we can also edit styles with js, and do some operations
var colorButton = document.getElementById("color-btn");

colorButton.addEventListener("click", function(){
  var colors = ["blue", "pink", "hotpink", "purple", "lightblue", "aqua", "teal", "fuchsia", "lightpink", "orange", "green", "yellow", "maroon", "black"];
  var x = Math.floor((Math.random() * colors.length) + 1);
  colorButton.style.backgroundColor = colors[x];
});





// ********************** TOGGLE BUTTON ***********************

var toggleBtn = document.getElementById("toggle-btn");
toggleBtn.addEventListener("click", myToggleFunction);

function myToggleFunction() {
    var x = document.getElementById('myBio');
    if (x.style.display === 'none') {
        x.style.display = 'block';
        toggleBtn.innerHTML = "hide my bio";
    } else {
        x.style.display = 'none';
        toggleBtn.innerHTML = "show my bio";
    }
}







// ********************** MOUSE OVER ***********************
var box1 = document.getElementById("box1");
box1.addEventListener("mouseenter", function(){
  box1.style.backgroundColor = "pink";
});

var box2 = document.getElementById("box2");
box2.addEventListener("mouseout", function(){
  box2.style.backgroundColor = "orange";
});

var box3 = document.getElementById("box3");
box3.addEventListener("mouseenter", function(){
  box3.style.backgroundColor = "pink";
});
box3.addEventListener("mouseout", function(){
  box3.style.backgroundColor = "orange";
});



