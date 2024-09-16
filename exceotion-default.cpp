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
        else if(x<y)
            throw 'f';
        else
            cout<<x/y;
    }

    catch(...){                                       
        cout<<"Some Exception Occured";
    }
    
return 0;
}