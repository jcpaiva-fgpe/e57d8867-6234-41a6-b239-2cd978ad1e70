#include <iostream>
using namespace std;

int main() {
    int array[100], E=0, U=0, N;
    cin>>N;

    for (int x=0; x<N;x++){
        cin>>array[x];
        if(array[x]%2==0) E++;     
        else  U++;
    }
    cout<<E<<" "<<U<<endl;
    return 0;
}