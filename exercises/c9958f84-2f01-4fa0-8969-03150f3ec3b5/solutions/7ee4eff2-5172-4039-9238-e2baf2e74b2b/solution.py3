txt = input().strip()

text = ''.join([ch if ch.islower() else ' ' + ch.lower() for ch in txt])

print(text)
