var a;
console.log(typeof (a)); // which is undefined data type

var a = 100;
console.log(typeof (a)); // data type is number

var a = "raghu";
console.log(typeof (a)); // String

var a = 88.5;
console.log(typeof (a)); // number

var a = undefined;
console.log(typeof (a)); // undefined

var a = null;
console.log(typeof (a)); // object which is bug in js

var a = true;
console.log(typeof (a)); // boolean 

var a = 0;
console.log(typeof (a));



// non primitive data types

var a = {}
console.log(typeof (a)); // object

var a = [];
console.log(typeof (a)); // object

var a = function () { };
console.log(typeof (a)); // function

// javascript is dynamic type language because which is allowed any type of data to the same variable



let b = 10;

// Cannot redeclare block-scoped variable 'b'

//let b = "";

//const' declarations must be initialized.ts(1155)
//Cannot redeclare block-scoped variable 'b

//const b

const c = 100;

//TypeError: Assignment to constant variable.
//c = 400;

console.log(c);

// console.log(d);
//  d = 100;

// datatypes_varibles.js:60 Uncaught 
// ReferenceError: d is not defined

// console.log(d); // answer is undefined
// var d = 200; 

// var d;
// console.log(d); // undefined 
// d = 200;

// console.log(e);
// let e = 100;

// datatypes_varibles.js:73 Uncaught 
// ReferenceError: Cannot access 'e' before initialization

// let e ;
// console.log(e); // undefined
// e = 100;





