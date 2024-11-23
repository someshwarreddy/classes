// {
//     key: value,
//     property: value,
// }

// object literal

var objlit = {
    namee:'somesh',
    city:'hyderabad',
}

// . dot notation 
console.log(objlit.city);
// console.log(objlit[namee]); bracket notation 

var objkey = new Object();
objkey.city= 'canada'
objkey.name = 'tejinder'
objkey['country'] = 'india'
console.log(objkey.country);


// constructer
// function objcon (city) {
//     this.city = city;
//     console.log(this)
//     return this.city;
// }

class objcon {
    constructor(city) {
        this.city = city;
        console.log(this);
        return this.city;
    }
}

// var objconres = objcon('hyderabad'); // basic call

var conres = new objcon('canada'); // constructed with new keyword;

console.log(typeof(conres.city));


var obja = Object.assign({}, objlit); // copy

var objc = Object.create({}); //  creating null or empty

objc.country = 'india'

console.log(objc['country']) // 

JSON.stringify(objc);



// in bulid methods

let keysObj = Object.keys(objlit); // which returns array of keys

console.log(keysObj);

let valuesobj = Object.values(objlit); // values of objects with a array;

console.log(valuesobj);

let entriesObj = Object.entries(objlit);
console.log(entriesObj);

//  Object.freeze(objlit); // which is used to freezw the object so we cannot add or delete existing object properties

 Object.seal(objlit);

objlit.city = 'hyathnagar';

console.log(objlit);

delete objlit.city;
console.log(objlit);

const object1 = {
  me: function(){
    console.log('me');
  }
};

object1.me();
Object.defineProperties(object1, {
  property1: {
    value: 42,
    writable: true,

  },
  property2: {
    value:100,
    city:'hyderabad'
  },
});

console.log(object1.property2);
// Expected output: 42

// shallow copy and deep copy callby value and call by reference