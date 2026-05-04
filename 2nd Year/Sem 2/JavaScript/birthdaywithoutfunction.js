const birthday=new Date('1990-02-22');
console.log(birthday);
const today=new Date();
console.log(today);
let age= today.getFullYear()-birthday.getFullYear();

const monthDiff = today.getMonth() - birthday.getMonth();
    
    if (monthDiff < 0 || (monthDiff === 0 && today.getDate() < birthday.getDate())) 
    {
        age--;
    }
console.log(age);

