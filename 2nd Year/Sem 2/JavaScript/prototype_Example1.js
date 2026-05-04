Array.prototype.upperCase = function () {
	let i;
	for (i = 0; i < this.length; i++) {
		this[i] = this[i].toUpperCase();
	}
};

function myGeeks() {
	let sub = ["Algorithm", "Data Structure",
		"Operating System", "html"];
	sub.upperCase();
	console.log(sub);
}
myGeeks();
