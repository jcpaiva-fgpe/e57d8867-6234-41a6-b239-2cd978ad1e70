n = int(input().strip())

if n <= 10:
	arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
	if len(arr) is not n:
		print ("Wrong input")
	else:

		for number in arr:
			print("*" * number)

else:
	print ("Wrong input")