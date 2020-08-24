def encode64(X,U,P):
	spec_symb = "+-&|!()}{[]^~*?:.,<>_/"

	if X in spec_symb:
		S = U + X + P
		S_encode = S.encode('utf-8')
		S_base64 = base64.b64encode(S_encode)
		return S_base64
	else:
		return "Wrong"



