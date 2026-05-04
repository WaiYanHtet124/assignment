Array.prototype.lowerCase = function () {
	let i;
	for (i = 0; i < this.length; i++) {
		this[i] = this[i].toLowerCase();
	}
};

function myGeeks() {
	let sub = ["Data Structure", "WEB Technologies",
		"JavaScript", "Python"];
	sub.lowerCase();

	console.log(sub);
}
myGeeks();
