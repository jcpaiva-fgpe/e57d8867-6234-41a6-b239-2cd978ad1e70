#include<iostream>
using namespace std;
int main () {
    int A[100],B[100],n,I,K=0,r;
    cin>>n;
    for (I=0;I<n;I++){
        cin>>A[I];

        if (A[I]%3==0) { 
              B[K]=A[I];
              K++; }
        }
    if (K>0){
        for (I=0;I<K;I++) 
            cout<<B[I]<<" "; 
        cout<<endl;
    }
    else{
        cout<<"EMPTY"<<endl;
    }

return (0); 
}