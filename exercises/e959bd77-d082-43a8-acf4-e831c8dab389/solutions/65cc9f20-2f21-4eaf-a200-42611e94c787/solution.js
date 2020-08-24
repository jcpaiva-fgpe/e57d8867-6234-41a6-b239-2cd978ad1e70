function detectWord(str) {
	let x = /[a-z]/g
	return str.match(x).join("");
};