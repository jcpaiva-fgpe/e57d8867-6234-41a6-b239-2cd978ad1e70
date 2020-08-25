#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int number=rand() {{gap}};
    int guess=-1;
    int trycount=0;
    
    while(guess {{gap}} number {{gap}} trycount<8){
        cout {{gap}} "Please enter a guess: ";
        cin {{gap}} guess;

        {{gap}} (guess {{gap}} number)
            cout<<"Too low"<<endl;

        {{gap}} (guess {{gap}} number)
            cout<<"Too high"<<endl;

        {{gap}};
    }
    
    if(guess==number)
        cout<<"You guessed the number";
    {{gap}}
        cout<<"Sorry, the number was: "<<{{gap}};
    
    {{gap}} 0;
{{gap}}
