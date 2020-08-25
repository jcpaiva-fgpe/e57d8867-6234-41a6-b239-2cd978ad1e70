#include <iostream>
#include <string>

using namespace std;

string swtch(string topermute, int x, int y){
	string newstring = topermute;
	newstring[x] = newstring[y];
	newstring[y] = topermute[x];
	return newstring;
}

void permute(string topermute, int place){
	if(place == topermute.length() - 1){
		cout<<topermute<<endl;
	}
    
	for(int nextchar = place; nextchar < topermute.length(); nextchar++){
		permute(swtch(topermute, place, nextchar),place+1);
	}
}

int main(int argc, char* argv[]){
    string _string;
    cin>>_string;

    if (_string.length() <= 10)
        permute(_string, 0);
    else
        cout<<"Wrong length string!"<<endl;
}
