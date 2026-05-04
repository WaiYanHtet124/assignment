let color = ["red", "green", "blue", "white", "purple"];
color.pop()
console.log(color)
color.shift()
console.log(color)
color.unshift("yellow")
console.log(color)
color.push("black")
console.log(color)

let flower = ["rose", "jasmine", "lily", "tulip", "orchid"];
let concatArray = color.concat(flower);
console.log(concatArray)
concatArray[0] = "cyan";
concatArray[1] = "dark blue";