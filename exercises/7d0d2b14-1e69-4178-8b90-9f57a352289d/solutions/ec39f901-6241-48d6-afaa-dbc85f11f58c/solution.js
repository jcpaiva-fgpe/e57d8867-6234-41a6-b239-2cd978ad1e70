function fiscalCode(person) {
	const months = ' ABCDEHLMPRST';
	const getV = s => s.toUpperCase().replace(/[^AEIOU]/g,'');
	const getC = s => s.toUpperCase().replace(/[AEIOU]/g,'');
	const code = s => (getC(s) + getV(s) + 'XXX').slice(0, 3);
	const [d,m,y] = person.dob.split('/');

	let sCode = code(person.surname);
	let fCon = getC(person.name);
	let fCode = fCon.length > 3 ? fCon[0]+fCon[2]+fCon[3] : code(person.name);
	let nCode = y.slice(-2) + months[m] + (person.gender === 'M' ? ('0'+d).slice(-2) : +d+40);
	return sCode + fCode + nCode;
}