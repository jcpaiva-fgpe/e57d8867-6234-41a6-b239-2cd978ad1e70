#include<iostream>
using namespace std;

void bubblesort(int a[], int N){
	{{code}}
}

int main()
{
	int N;

	cin>> N;

	int a[N];
	for(int i=0;i<N;i++)
		cin>>a[i];
		
	bubblesort(a,N);	
	
	
	for(int i=0;i<N;i++)
		cout<<a[i]<<" ";
	cout<<endl;
		
	return 0;
}