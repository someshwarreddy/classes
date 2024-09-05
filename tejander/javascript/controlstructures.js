// if,  else, else if, switch, for, while,


var a = []; // condtion is true
var b = {}; // condtion is true
var c = null; // condition is false
var d = undefined ; // condition is false
var e = "1"; // condition is true
var f = 0; // conition is false
var g = true // condition is true
var h = 11; // condition is true

var i = Symbol() // condition is true;
// var j = $; // error
var k = '#'

var l = 10; 
var m = 20;   

// relational , boolean , logical

// syntax

// if condition is true 
// the inside block of statements will excute
// if (condtion) {
//  statements
// }

if (!l) {
    console.log("if condition is true i am available");
}
else {
    console.log("if block conditon is false i will excute")
}

for(var i = 0; i < 10;) {
    console.log(i);
    break;
    if(i==0){
        break;
    }
    
}

while(l) {
    console.log("hi")
    break;
}

var z = 3;

// switch statement
switch (z)
{
case "":
    console.log("Case 1 is Matched.");
    break;

case "tejinder":
    console.log("Case 2 is Matched.");
    break;

case 3:
    console.log("Case 3 is Matched.");
    break;

default:
    console.log("Default case is Matched.");
    break;
}


