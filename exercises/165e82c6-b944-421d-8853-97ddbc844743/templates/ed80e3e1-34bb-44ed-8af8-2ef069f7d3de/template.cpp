#include <iostream>
using namespace std;

class Rectangle {
    {{code}}
};


int main () {
	int W,H;
	cin>>W>>H;
  	Rectangle foo;
  	Rectangle bar (W,H);
  	foo = duplicate (bar);
  	cout << foo.area() << endl;
  	return 0;
}