n = int(input().strip())
arr = []

{{code}}

if n > 1 and n <= 30:
	for num in range(1, n+1):
		arr.append(fibonacci(num))
		
	print(' '.join(map(str, arr)))
else:
	print ("Wrong input")