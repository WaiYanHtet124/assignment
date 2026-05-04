//const months = ["January", "February", "March", "April","May", "June","July","August","September", "October","November","December",
//  ];

//const month = new Date().getMonth();
//console.log(months[month]);


const today = new Date();

// Getting full month name (e.g. "September")
const month = today.toLocaleString('default', { month: 'long' });

console.log(month);

