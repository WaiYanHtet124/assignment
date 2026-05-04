let today=new Date();
console.log(today);
let christmas=new Date('2024-11-25');
console.log(christmas);
//let timediff=christmas.getTime()-today.getTime();
let timediff=christmas-today;
console.log(christmas.getTime());
console.log(today.getTime());
let result=Math.floor(timediff/(1000*60*60*24));

console.log(result);