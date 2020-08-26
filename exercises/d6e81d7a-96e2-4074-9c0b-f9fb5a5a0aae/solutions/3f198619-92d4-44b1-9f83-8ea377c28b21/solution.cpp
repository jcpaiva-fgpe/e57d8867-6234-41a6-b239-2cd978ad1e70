#include<iostream>
#include<math.h>
using namespace std;

int main () {
    double x1,x2,delta,a,b,c;

    cin>>a>>b>>c;
       
   delta=((b*b)-(4*a*c));
   if (delta<0) 
   		cout<<"IMPOSSIBLE"<<endl;

   else {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<x1<<" "<<x2<<endl;
    }
  
   return (0); 
}