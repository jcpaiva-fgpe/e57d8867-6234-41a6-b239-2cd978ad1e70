#include <iostream>

using namespace std;


{{code}}

int main(){
    int row, position;

    cin>>row>>position;
    
    if(row<position){
        cout<<"Invalid entry!";
        return 0;
    }
        
    cout<<compute_pascal(row, position)<<endl;
}
