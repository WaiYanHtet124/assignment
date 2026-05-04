const prompt = require('prompt-sync')({sigint:true});
const str=prompt("Enter your string   :  ");
let count=0;
const checkletter="i";

    for(let i=0;i<str.length;i++)
    {
    if(str.charAt(i)===checkletter)
    {
    count++;
    }
}

console.log(count);