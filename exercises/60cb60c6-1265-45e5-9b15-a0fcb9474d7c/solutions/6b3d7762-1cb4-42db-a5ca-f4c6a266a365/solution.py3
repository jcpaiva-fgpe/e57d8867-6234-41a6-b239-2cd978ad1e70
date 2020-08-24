word = input().strip()

index = (len(word) -1)
new_word = ""

while index >= 0:
	new_word += word[index]
	index -= 1

if new_word == word:
	print("Yes")
	
else:
	print("No")