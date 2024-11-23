// litral way 

let arr = [];

arr[0] = 1;
arr[1] = 'string';
arr[2] = true;
arr[3] = undefined;
arr[4] = null;
arr[5] = [];
arr[6] = {};

console.log(arr);

console.log(arr[6]); // object 

console.log(arr.length);
arr.length = 7; // restricted the length
arr[23] = ' iam array new value';
console.log(arr); // object but we got undefined because length is resticted

console.log(arr.length);

// construct

var arrcon = new Array(0);

console.log(typeof (arr));
console.log(typeof (arrcon));
console.log(arrcon.length);

//  array deconstuct
// methods 

for (var i = 0; i < arr.length; i++) {
    //  staments
    console.log(i);
    //  find the empty valuss in array
}


// pop
console.log(arr.pop());
// push
arr.push('somthing');
console.log(arr);

// shift
arr.shift(); // removes the first value of array

console.log(arr);

// unshift

arr.unshift(1); // add

console.log(arr)

var index = arr.indexOf(undefined);
console.log(index);


arr.forEach(value => {
    console.log(value); 
})

for(value of arr){
    console.log(value); // which is not omit the empty values
}

for(index in arr){
    console.log(index) // 
}

var empty = arr.filter(value =>value === undefined)

console.log(empty);