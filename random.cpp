#include <iostream> 
#include <stdlib.h>
#include <time.h>
using namespace std; 

int main(){
    srand(time(0));
    int x=rand()%10;
    int n;
    //cout<<x<<endl;       For Verification
    cout << "Guess a Number (0 to 9): ";
    cin >> n;
    while(n!=x){
        if(n>x)
            cout << "Too High :( "<<endl;
        else
            cout << "Too Low :( "<<endl;
        
        cout << "Try Again: ";
        cin >> n;

    }
    cout<<"Well Guessed! :)";
return 0;
}