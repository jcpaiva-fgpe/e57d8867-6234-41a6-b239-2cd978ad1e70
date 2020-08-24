mac = input()

def checkMAC(mac):
	mac_split = mac.split(":")
	hex_arr = "ABCDEF0123456789"

	if len(mac_split) is 6:
		for x in mac_split:
			if not(x[0] in hex_arr) or not(x[1] in hex_arr):
				return False
		return True
	else:
		return False

print(checkMAC(mac))
