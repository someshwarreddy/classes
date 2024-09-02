// lexicalscope

var g = "global"; // here lexical enviromnment is global 
let l = "let global"

// here lexical enviromnment is global function
function globalfunction(a) {

    var globalfunctionvar = " i am global function var "
    // this is lexical envioronment of globalfunction nothing but local scope of globalfunction
    function nestted() {
        console.log(a)
    }
    nestted();
}

globalfunction(g);


function parent() {
    var b = " i am function parent value"

   return function child(){
        console.log(b)
    }
}

var cb  = parent();

cb();

for(let i=0 ; i< 3; i++){
    setTimeout(() => {
        console.log(i);
      }, 1000);     
}
 
var d = {
    a:10,
    v: function(){
        return (this.a)
    }
}

d.v()

function a(x) {
   return function b(y){
     return x+y;
    }
}

var dd = a(10);

var cc = dd(5);
 console.log(cc)