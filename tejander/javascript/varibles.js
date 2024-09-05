// excution context

// var let const

var a ="tejinder";
let b ="value unavilable in global creation phase"
const c = " i am const value once defined unchangeble "

//  let is a block scope 
// var is function scope 
var gloabal = "i am global"

function bb() {

  var a = "function excution"
  
}

bb();

// default value of var is undefined
// default value of let is nothing

// let b; //Uncaught SyntaxError: Identifier 'b' has already been declared

var a; // var allows redclaration of same variable
console.log(b)

b = 20; // let can allow assign diffrent type data to same varibale

console.log(b)