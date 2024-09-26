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
var con = 1;
while(con > 0) { // here we are assigning i value for every iteration
    console.log('true block');
    con--; // 2 , 3, 4, 5

// While(i=0) it is false
// While(1) it is infinite loop;
// While (true) it is infinite loop;
// While(i=1) it is infinite loop;
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


var increment = 0;
increment++;
increment++;
console.log(increment++);
increment--;
increment--;
increment--;
console.log(increment--);

1 ? console.log('yes ternary '):console.log('no ternary')