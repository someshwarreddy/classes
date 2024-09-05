a = 10;
var a;
a = "tejinder"
console.log(a)  // hoisting a variable in memory  


let b;
b = 10;
b = "komal"
console.log(b) // sometrick.js:5 Uncaught ReferenceError: Cannot access 'b' before initialization


function one() {
    function two() {
        console.log("i am second funtcion")
    }
    two()

    console.log("i am first funtcion")
}

one()