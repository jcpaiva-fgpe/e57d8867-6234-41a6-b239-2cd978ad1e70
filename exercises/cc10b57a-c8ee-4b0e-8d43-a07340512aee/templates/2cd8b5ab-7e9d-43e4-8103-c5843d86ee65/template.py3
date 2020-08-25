cost_price, sell_price, inventory = [float(x) for x in input().split()]

profit = {
    "cost_price": cost_price,
    "sell_price": sell_price,
    "inventory": inventory
}

{{code}}

result = _profit(profit)

print(result)
