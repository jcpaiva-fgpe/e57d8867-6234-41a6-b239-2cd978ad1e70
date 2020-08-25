word = input().strip().lower()

map = {}

for c in word:
    if c in map:
        map[c] += 1
    else:
        map[c] = 1

print(map)
