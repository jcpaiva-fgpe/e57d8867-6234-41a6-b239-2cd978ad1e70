character = input().strip().lower()
vocals = "aeiouy"

if len(character) is 1:

    if character in vocals:
        print('Yes')
    else:
        print('No')
else:
	print('No')
