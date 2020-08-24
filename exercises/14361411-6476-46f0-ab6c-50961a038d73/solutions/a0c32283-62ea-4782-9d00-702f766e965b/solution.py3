def check_password(password):
	special_symbol = "+-&&||!()}{[]^~*?:.,<>_/"
	numbers = "0123456789"

	if any(x.isupper() for x in password) and any(x in special_symbol for x in password) and any(x in numbers for x in password) and len(password) > 8 :
		return True
	else:
		return False

