// functions
// named function 
// unnamed or function expression or anonymous
// iife
// call back
// higher order
// arrow or lamda
// aync 
// genrator function
// method function
// pure functions
// impure functions
//iife

(function () {

})()


function raghu() { // function declaration
    // long run synchronous program to avoid this we use asynchrounous program using callbacks
    // for (let i = 0; i < 10000; i++) {
    //     console.log(i)
    // }
}

raghu()

// calling function or invoking

var fexpression = function () {
    console.log(' i am function expression')
}; // function expression

fexpression();


console.log(typeof (fexpression))

//callback

function a() {
    setTimeout(() => {
        console.log("hi");
      }, 1000);  
}

function b(callback) {
    callback();
}

b(a);

// higher order functions

function c(x, y) {
    console.log(x, y)
}

c(a, b);

function d() {
    return function () { }
}
f = d();


// aynchronous programming

async function api() {
    let data = await fetch("url");
}

let obj = {
    name: function () { },
}


// purefunction

function sum(a) {
    return a + a;
}

var sum = sum(1);
console.log(sum);

// impurefunction 

var c=20;
function ss() {
    return c+20;
}
ss();


function lscope(a){
    console.log(a);
}

lscope("lscope")

function abc(paramone, paramtwo ) {
    console.log(paramone, paramtwo, this.name);
}

abc(1,2);
abc(a = 10, b=20);
abc.call({name:"raghu"},1,2);

var that = "i am arrow";

// console.log(that);


let afunction = (a) => a

console.log(afunction("0"))

let ab = (a) => {
    return a
}

console.log(ab("20"))

function res (...a) { // restparam
    a.forEach((element) => {console.log(element)})
    console.log(a)
}

res(1,2,3);

var objj = {
    fun: () => {
        console.log("hi");
    }
}

objj.fun();
console.log(abv)
var abv ;

// we dont use function keyword
// arrowFunction('i am aarow argument')
// var arrowFunction = (a) => {
//  console.log(a)
// } 

console.log(bbb)

let bbb;











