const prompt = require("prompt-sync")();
var num = +prompt("Enter the number: ");

let result = 1;
for (let i =1; i<=num; i++){
    result *= i;
}
console.log("The factorial of " + num + " is " + result);