function calculateAge(birthDate) {
    const today = new Date();
    const birthDateObj = new Date(birthDate);
    
    let age = today.getFullYear() - birthDateObj.getFullYear();
    const monthDiff = today.getMonth() - birthDateObj.getMonth();
    
    if (monthDiff < 0 || (monthDiff === 0 && today.getDate() < birthDateObj.getDate())) {
        age--;
    }
    
    return age;
}

const birthDate = '1990-02-22'; // Format: YYYY-MM-DD
const age = calculateAge(birthDate);
console.log(age); // Output: Age of the person