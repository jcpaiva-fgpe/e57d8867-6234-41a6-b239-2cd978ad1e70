int list_prime(int n){	
	int i;

	if(n<2)
	{
		cout<<"Summation not possible\n";
	}


	else if(n%2==0)			{
		for(i=1;i<=n/2;i++)
			cout<<2<<" ";
	}
	else{
		n=n-3;

		for(i=1;i<=n/2;i++)	
			cout<<2<<" ";
		
		cout<<3<<" ";
	}
}
