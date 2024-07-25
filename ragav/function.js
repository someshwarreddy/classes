// functions
// named function 
// unnamed or function expression or anonymous
// iife
// call back
// high order
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
    for (let i = 0; i < 10000; i++) {
        console.log(i)
    }

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
    console.log("hi")
}

function b(callback) {
    callback();
}

b(a);

// high order functions

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



