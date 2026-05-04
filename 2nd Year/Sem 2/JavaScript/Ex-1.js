const prompt = require("prompt-sync")();
var base = +prompt("Enter the base number: ");
var exp = +prompt("Enter the exponent: ");
var power = base**exp;
console.log("The result of " + base + " power " + exp + " is " + power);