//global scope
//function scope
//block scope 
// lexical scope
// closure scope

var iamGlobalVar = 'globalvar';
console.log(iamGlobalVar);

//function scope

function scopeFunction() {
var iamGlobalVar = 'globalvar';

    // var iamGlobalVar = 'i am local scope of function';
     iamGlobalVar = 'i am local scope of function two' // reference is one address 
    console.log(iamGlobalVar)
}
scopeFunction();

console.log(iamGlobalVar);
console.log(iamGlobalVar);
//block scope  

{
    let iamGlobalVar = 'i am local block scope ';

    console.log(iamGlobalVar);
}

console.log(iamGlobalVar);

// lexical scope;
function outer() {
    let a = 10;
    function inner() {
        console.log();
    }
    inner();
}
outer();

// closer scope 
function outerr(x) {
    function innerr() {
        console.log(x);
    }
    innerr();
}
outerr(29);





