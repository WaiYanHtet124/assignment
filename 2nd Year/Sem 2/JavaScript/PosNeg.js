const prompt=require("prompt-sync")();
var num = +prompt("Enter the number ");
if(num < 0){
    console.log("The number is negative")
}
else if(num>0){
    console.log("The number is positive")
}
else{
    console.log("The number is zero")
}

