let data = prompt().split(' ');
let s1 = data[0];
let s2 = data[1];

let newStr = ""
let i = 0
	
for (const char of s1) {
  char === s2[i] ? newStr += char : newStr += 0
	i++
}

console.log(newStr);