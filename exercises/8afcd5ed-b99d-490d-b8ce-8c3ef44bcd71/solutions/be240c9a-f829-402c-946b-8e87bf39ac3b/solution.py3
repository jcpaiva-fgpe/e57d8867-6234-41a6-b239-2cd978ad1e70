n = int(input().strip())
m = int(input().strip())

def circle(radius):
	pi = 3.14

	return (radius*radius)* pi

def square(l):

	return l * l

if n == 1:
	print(circle(m))

elif n == 2:
	print(square(m))

else:
	print("Wrong Input")