function encrypt(word) {
	let w = word.split('').reverse().join('');
	var replaceChars={ "a": 0 , "e": 1, "o": 2, "u": 3 };
	return w.replace(/[aeiou]/g,(match) => replaceChars[match]) + "aca";
}