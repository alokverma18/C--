#include <iostream> 
using namespace std; 

int main(){
    int x,y;
    cout<<"Enter the Numerator : ";
    cin>>x;
    cout<<"Enter the Denominator : ";
    cin>>y;
    
    try{
        if(y==0)
            throw y;
        else
            cout<<x/y;
    }

    catch(int y){                                       
        cout<<"You can't divide by Zero :(";
    }
    
return 0;
}