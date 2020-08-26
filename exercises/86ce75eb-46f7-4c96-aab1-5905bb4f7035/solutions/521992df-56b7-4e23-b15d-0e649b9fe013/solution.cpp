#include<iostream>
using namespace std;
int main () {
    int a,n,s=0,I=0;

    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>a;
        if (a < 0) 
            a = -a;
        s += a;
    }
    cout<<s<<endl;
    return (0); 
    }
