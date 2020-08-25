#include <iostream>

using namespace std;

int main() {
    int A, B, sum = 0;
    
    cin>>A>>B;
    
    while(A){
        sum += abs(A%10 - B%10);
        A/=10;
        B/=10;
    }

    cout << sum << endl;
    
    return 0;
}
