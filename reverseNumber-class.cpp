#include <iostream>    
using namespace std; 

class Reverse{
    private:
        int n;
    public:
        Reverse(){
            cout<<"Enter a Number : ";
            cin>>n;
        //}
        //~Reverse(){
            int r=0,i=0;
            while(n){
                r=(n%10)+r*10;
                n/=10;
            }
            cout<<"Reversed Number : "<<r;
        }
};
int main(){
    Reverse r;  
return 0;
}