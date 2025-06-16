// namedfunction
// unnamed function or anonmyous or function expression
// immediate invoke function expresstion
// lamda function or arrow funtion

// function declaration

function normal() {
  console.log('i ma just function')
}
normal();

var x = 'i am raghu function variable'

// function outer() {
//   //  function scope
//   console.log(y) // error
//   function inner() {
//     var y = ' i am inner'
//     console.log(x)
//   }
//   inner();
// }
// outer()
//  in creation phase of global only memory created or hoisted the outer function 
// Global Execution Context in excution phase js will create a seprate excution context for outer function
// in outer function excution context js will create a seprate excution context of inner function


function outer() {

  function inner() {
    y = ' i am inner'
    console.log(y)
  }
  var y;
  inner();
  return y;
}
var a = outer();
console.log(a);
obj = {
  name: 'raghu',
}

function one(namee) { // parameter 'namee'
  console.log(namee);
  console.log(obj.namee); // calling from the object undefind
  console.log(obj[namee]); // raghu your passing key as dynamic way name obj['name']

}
one('name'); // values are arguments  'name'



function add(b, c, d, a) { // a is a default parameter
  // console.log(a =30, b =40, c=50, d) // with postion values are overriiden
  console.log(a, b, c, d,)
  console.log(a + b + c + d)
  // b, c, d, a = 10, this scenario will whwn ever we want a const value used in function as parameter
  console.log(undefined + 100) // NaN
}

add(30, 40, 50);

var obj = {
  sal: 100,
  name: 300,
  x: 'i am xmen',
  abt: function () {
    console.log('dfgdsfg');
  }
}

function addn(a = obj[x]) {
  console.log(a);
}
addn();

// obj[sal] here sal wirks as variable Uncaught ReferenceError: sal is not defined
// obj['sal'] here sal works as key of object so we can find value of particular key object

function restp(b = 10, ...a) { // ... is a rest params creats a array of passesd arguments
  console.log(a);

}

restp(1, 2, 3, 3, 34, 5, 6);

add(10, 20);
function add(a, b) {
  console.log(a + b);
  return a + b;
}
console.log(xh); // 30
let xh;
const y = 20;