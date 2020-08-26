void bubblesort(int a[], int N){
	int temp;
	
	for(int j=0;j<N-1;j++)
		for(int i=0;i<N-1;i++)
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
}

