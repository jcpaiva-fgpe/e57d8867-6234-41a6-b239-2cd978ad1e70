public static int nextPrime(int num) {
	if(num==0||num==1){  
  		return nextPrime(num+1);   
	}
	else{  
		for(int i=2;i<=num/2;i++){      
			if(num%i==0){      
				 return nextPrime(num+1);          
			}      
	 	}      
		}
	
	return num;
}
