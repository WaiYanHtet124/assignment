function getDaysInMonth(month, year) {
    // Create a new Date object for the specified month and year
    const date = new Date(year, month - 1, 1);
    
    // Move to the next month and subtract one day to get the last day of the specified month
    date.setMonth(date.getMonth() + 1);
    date.setDate(date.getDate() - 1);
    
    // Return the day of the month (number of days)
    return date.getDate();
  }
  
  // Test the function with the given test data
  console.log(getDaysInMonth(9, 2022)); // Output: 31
  