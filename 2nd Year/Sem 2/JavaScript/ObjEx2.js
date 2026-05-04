var flower = {name: "Rose", color: "Red", other: ["jasmine", "orchid", "lili"]}

console.log("Flower Name: ",flower.name)
console.log("Color: ",flower.color)
console.log("Other Favorite Flowers:")
/*for(a in flower.other){
    console.log(flower.other[a])
}*/
for(let a of flower.other){
    console.log(a)
}