N = int(input().strip())
L = [word for word in input().strip().lower().split(' ')]
W = input().strip().lower()

{{code}}


if N<10:
    if len(L) != N:
        print("No")
    else:
        Is_in(W, L)
else:
    print("No")
