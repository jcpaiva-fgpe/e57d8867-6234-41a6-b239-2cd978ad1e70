#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;

	float V[N], S=0, X;

	for (int i=0; i<N; i++){
		cin>>V[i];
		S += V[i];
	}
	X = S/N;

	cout<<X<<endl;
	return 0;
}