//global scope
//function scope
//block scope 
// lexical scope
// closure scope

var iamGlobalVar = ' globalvar';

console.log(iamGlobalVar);

//function scope

function scopeFunction() {
    //var iamGlobalVar = 'i am local scope of function';
     iamGlobalVar = 'i am local scope of function'
    console.log(iamGlobalVar)
}
scopeFunction();
console.log(iamGlobalVar);

//block scope  

{
    let iamGlobalVar = 'i am local block scope ';

    console.log(iamGlobalVar);
}

console.log(iamGlobalVar);



