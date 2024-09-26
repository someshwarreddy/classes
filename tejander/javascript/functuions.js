// named function
// unnamed function
//  iife 
//  arrow function
// callback functions
//  pure functions
//  impure function
//  higer order function
//  function currying

// scope of function


(function(){
  for( i=0; i<5; i++){
    setTimeout(function(){
      console.log(i);
    }, 1000) 
  }
})()

var a = 10;
function iam() {
  var iam = "iam iam function var"
  function insideiam() {
    var insideiam = "iam inside var"
  }
  insideiam()
}
iam();

var a = 10;
var b = 10;
function sum(a, b = 10) {
  var c = a + b;
  console.log(c);
}

sum(10) // arguments ;

let fscope = 100;
console.log(fscope); // 100
function iamnamed() {
  var fscope = 300;
  console.log(fscope); // 300
}

console.log(fscope) // 100
iamnamed();
console.log(fscope); // 100

//  block
{
  let fscope = 600; // 600
}

console.log(fscope); // 600

var bb = '';
function aa(...rest) {
  var bb = rest;
  console.log(`${rest}, ${bb}`) // template literals
}


var unnamedFun = function(){
  console.log('i am unnmmed')
  return 'i am returned';
  // this line not works
}

let rea = unnamedFun();
console.log(`i am got function return value ${rea}`)

aa("soo",2,true);


for(let i=0; i<5; i++){
  setTimeout(()=>{
    console.log(i);
  }, 1000) 
}

let arrow = (a)=> a;

console.log(arrow('i am arrow'));

//   callback function is function which is passed as a argument to the another function
function one(){
  setTimeout(()=>{
    console.log(" aynchronous");
  }, 1000)
}

function two(callback){
  callback();
}

two(one); // which is higer order function

function three () {
  console.log('hi i am function')
}
// function parameters

function p(parameterone){
  return function a(){
    return parameterone();
  }
}

let pp = p(three); // higer order function because which recived a function as a argument and returning a function


 [1,2.3].map((n => n*2));

//  purefunctions

function pure(a,b){
  console.log(a+b);
}

pure(1,2);



let count = 0;
function impure(){
  count++;
  console.log("impure"+ count);
}
impure();
console.log(`hi impure ${count}`);

function ab(){
  return function ac(){
    console.log('hi function currying')
  }
}
ab()();

var scope = "i am scope";

function scopee(){
  var scope = " i am function scope";
  function scopetwo(){
      // var scope = " i am function scopetwo";
    console.log(scope);
  }
  scopetwo();
}
scopee()