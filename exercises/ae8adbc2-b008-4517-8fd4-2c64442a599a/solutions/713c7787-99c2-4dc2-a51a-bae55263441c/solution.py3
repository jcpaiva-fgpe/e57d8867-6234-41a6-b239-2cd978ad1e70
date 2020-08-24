def check_rhymes(rhymes, word):
	arr = []
	for element in rhymes:
		if element[-3:] == word[-3:]:
			arr.append(element)
	return arr
