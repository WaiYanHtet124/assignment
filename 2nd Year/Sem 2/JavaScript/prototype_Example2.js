Array.prototype.stringLength = function () {
	let i;
	for (i = 0; i < this.length; i++) {
		this[i] = this[i].length;
	}
};

function lengthFunction() {
	let str = ["JavaScript", "Python", "Data Structure"];
	str.stringLength();
	console.log(str);
}
lengthFunction();
