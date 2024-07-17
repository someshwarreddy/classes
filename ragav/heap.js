var a = {};
var b = [];
var c = 'raghu';
var d = 12;

// call stack 

function a() {
    function b() {
        function c(){

        }
        c();
    }
    b();
}

a();

function call (){

}

function call2(call){
     call()
}

call2(call)