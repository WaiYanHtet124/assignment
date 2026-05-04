function getDayInMonth(month,year)
{
    var date=new Date(year,month,0).getDate();
    return date

}

console.log(getDayInMonth(1,2024));
console.log(getDayInMonth(2,2024));
console.log(getDayInMonth(9,2024));
console.log(getDayInMonth(12,2024));