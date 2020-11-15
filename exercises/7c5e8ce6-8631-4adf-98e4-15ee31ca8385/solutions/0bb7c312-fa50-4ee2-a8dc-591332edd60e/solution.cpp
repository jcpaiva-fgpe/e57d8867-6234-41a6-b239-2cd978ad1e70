#include<iostream>
using namespace std;

int main () {
    int I,n,C=2,J=0,K=0,r;
    cin>>n;
    int a[n],b[n];
    for (I=0;I<n;I++) {
        cin>>a[I];
        do {
            r=a[I]%C;
            if (r==0)
            	K++;
            C++; }
            while (C < a[I]);
        if (K==0) {
                  b[J] = a[I];
                  J++; 
              }
        K=0;
        C=2; 
    }
    if (J>0){
    	for (I=0;I<J;I++) {
        cout<<b[I]<<" "; 
    }
    cout<<endl;
    }
    else{
    	cout<<"EMPTY"<<endl;
    }
    

    return (0); 
}