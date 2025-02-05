
var namee = 'Ragav';
console.log(namee);

console.log(rohit);
var rohit;
// var we have undefined value in creation phase

let age;


// let we dont have have undefined value in creation phase


console.log(ragage);
var ragage = 10;

console.log(ragage);

let letage = 10;
console.log(letage);
letage = 20; 
// const constage ; Uncaught SyntaxError: Missing initializer in const declaration 

const constage = 10;

var newvar;

newvar = 10;

var newvar = 20;
// var allows redeclaration

// let letage = 10;
// let is not allowed to redeclaration

letage = "rohit";
letage = true
letage = null
letage = undefined
console.log(letage);

newvar = "rohit";
newvar = true;
newvar = null;
newvar = undefined;
console.log(newvar);

// var is a function scope

// var abc = 10;
// let xyz = 20;

// console.log(abc);

// function abcd() {
//     var abcde = 20
//      abc= 40;
//    let xyz = 400
//     // console.log(xyz);
//     console.log(abc);
// }
// // console.log(abc); // Uncaught ReferenceError: abcde is not defined 
// abcd();

// // console.log(xyz);
//  console.log(abc);  

// {
//     var abcccc = 100;
//     let xyz = 200;
//     let abcdfff= 4000
// }
// console.log(xyz);
// console.log(abcccc);
//  console.log(abcdfff); // Uncaught ReferenceError: abcdfff is not defined

// let is block scope
{
    var abcccc = 100;
    let xyz = 200;

}
// console.log("hi i am block scoped" + xyz);

console.log("hi i am not block scoped only function scope" + abcccc);
// we can accsees the var outside the block
// console.log(xyz);

// var is a function scope
function abc() {
    var a = 10;
    let b = 20;
}
// we can not access the var and let outside the function
// console.log("i am function scope"+ a);
// console.log(b);

// for (var i = 0; i < 10; i++) {
//     setTimeout(function () {
//         alert(i);
//     }, 0);
// }

if(true){
    var a = 10;
    let b = 20;
}


var global = 'global';




