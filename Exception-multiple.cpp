#include <iostream> 
using namespace std; 

int main(){
    
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    try{
        if(x>0)
            throw x;
        else if(x<0)
            throw 'e';
        else
            throw "Zero";
    }

    catch(int y){                                       
        cout<<"Positive";
    }
    
    catch(char a){
        cout<<"Negative";
    }
    catch(const char *p){
        cout<<p<<endl;    
    }

    
return 0;
}