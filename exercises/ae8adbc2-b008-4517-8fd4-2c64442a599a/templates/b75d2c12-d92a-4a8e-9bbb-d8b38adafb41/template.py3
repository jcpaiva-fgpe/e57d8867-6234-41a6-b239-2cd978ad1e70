w = input()
r = [word for word in input().strip().lower().split(' ')]

{{code}}

if len(check_rhymes(r,w)) is 0:
	print("None")
else:
	print(' '.join(map(str, check_rhymes(r,w))))