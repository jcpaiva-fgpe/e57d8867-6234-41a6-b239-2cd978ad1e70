function isTriplet(n1, n2, n3) {
	let a = [n1, n2, n3].sort((a,b)=>(a-b))
	return (a[0]*a[0] + a[1]*a[1] === a[2]*a[2])? true : false
}