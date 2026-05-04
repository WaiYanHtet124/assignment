const prompt=require("prompt-sync")();
let height = prompt("Enter the height: ");
height = parseInt(height);
let base = prompt("Enter the base: ");
base = parseInt(base);
let area = (1/2)*base*height;
console.log("The area of teh triangle " + area);