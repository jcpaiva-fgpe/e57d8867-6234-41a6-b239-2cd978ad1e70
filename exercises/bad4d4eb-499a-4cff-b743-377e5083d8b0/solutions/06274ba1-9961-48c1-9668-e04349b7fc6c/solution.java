public static String moran(int n) {
 	int sum = 0,num=n;
	while( num != 0 ){
		sum+=num%10;
		num = num/10;
	}

	BigInteger bigInt = BigInteger.valueOf(n/sum);
	
	if ( sum % 6 == 0) 
		return "H";
	if (bigInt.isProbablePrime(100)) 
		return "M";
	return "Neither"; 
}
