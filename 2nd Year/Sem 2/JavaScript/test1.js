// // Number of rows in the pattern
// let rows = 5;

// // Outer loop for rows
// for (let i = 1; i <= rows; i++) {
//     let pattern = "";
    
//     // Inner loop for stars
//     for (let j = 1; j <= i; j++) {
//         pattern += "* ";
//     }
    
//     console.log(pattern);
// }



// const prompt = require('prompt-sync')(); // For user input in Node.js

// let sum = 0;

// while (true) {
//     let num = Number(prompt("Enter a positive number (negative to stop): "));

//     if (num < 0) {
//         break; // Stop the loop if number is negative
//     }

//     sum += num; // Add positive number to sum
// }

// console.log("The sum of positive numbers is: " + sum);



// function compareAndSum(num1, num2) {
//     if (num1 > num2) {
//         alert("The first number is greater than the second.");
//     } else {
//         return num1 + num2;
//     }
// }

// // Example usage:
// let result = compareAndSum(5, 10);
// if (result !== undefined) {
//     console.log("Sum:", result);
// }


//      Counting Vowels
function countVowels(str) {
    // Convert string to lowercase for case-insensitive matching
    str = str.toLowerCase();
    
    let count = 0;
    const vowels = "aeiou";

    for (let i = 0; i < str.length; i++) {
        if (vowels.includes(str[i])) {
            count++;
        }
    }

    return count;
}

// Example usage:
let input = "Hello World";
console.log("Number of vowels:", countVowels(input));



//      Prime
function isPrime(num) {
    if (num <= 1) {
        return false;
    }

    for (let i = 2; i < num; i++) {
        if (num % i === 0) {
            return false;
        }
    }
    
    return true;
}

// Example usage:
let number = 29;
console.log(number + (isPrime(number) ? " is prime." : " is not prime."));
