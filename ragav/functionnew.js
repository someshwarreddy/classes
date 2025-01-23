
// Function declaration hoisting
function one(){
	
}

one(); //function call 

var globalvar= 100;

function globalfun(){
  // local scope 
  var somthing
  
  function lf(){
  var lfvar;
  }
lf()
}

globalfun();