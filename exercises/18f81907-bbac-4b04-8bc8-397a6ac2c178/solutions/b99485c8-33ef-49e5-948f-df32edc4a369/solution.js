function isPandigital(num) {
	return new Set((num + '')).size === 10
}