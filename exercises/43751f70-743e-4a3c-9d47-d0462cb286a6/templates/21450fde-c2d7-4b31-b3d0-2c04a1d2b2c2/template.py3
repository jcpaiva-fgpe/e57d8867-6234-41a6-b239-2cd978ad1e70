N = int(input())

{{code}}

if 0 < N < 10:
	for x in bags(N): print(replace_brackets(x[1]))
else:
	print("Wrong")