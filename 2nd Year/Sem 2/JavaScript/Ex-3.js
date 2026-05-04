const prompt = require("prompt-sync")();
var sec = +prompt("Total number of secssion: ");
var att = +prompt("Total number of attendence: ");
var abscence = sec - att;
var percent = (att*100)/sec;
console.log("Number of absence: " + abscence)
console.log("Percentage of attendence: " + percent)