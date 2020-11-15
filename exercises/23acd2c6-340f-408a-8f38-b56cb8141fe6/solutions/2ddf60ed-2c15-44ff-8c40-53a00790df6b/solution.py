def final_price(n):
    if n == 0:
        return 0
    else:
        return n * 24.95*0.6 + 3 +(n-1)*0.75

