#include <iostream>

using namespace std;

int main() {
    unsigned char num;
    cin>>num;

    unsigned char mask=0x80;
    char str[20];
    char i;
    
    for (i=0;i<8;i++){
        if (mask&num)
            str[i]='1';
        else
            str[i]='0';
        
        mask>>=1;
    }
    
    str[i]=0;
    
    cout<<str<<endl;
    
    return 0;
}
