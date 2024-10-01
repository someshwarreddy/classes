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