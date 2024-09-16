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
            throw 'e';
        else
            cout<<x/y;
    }

    catch(int y){                                       
        cout<<"You can't divide by Zero :(";
    }
    
    catch(char a){
        cout<<"Division less than 0";
    }
    catch(...){                                          //  catch(...) -> for catching all other types of exceptions
        cout<<"Unknown Exception";
    }

    
return 0;
}