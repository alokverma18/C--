#include <iostream> 
using namespace std; 

int main(){
    
    int amount;
    cout<<endl<<"Enter Amount : ";
    cin>>amount;

    int p,q,r,s;

    switch(1){

        case 1:
            p = amount/100;
            cout<<"100Rs Notes : "<<p<<endl;
            amount%=100;
        
        case 2:
            q = amount/50;
            cout<<"50Rs Notes : "<<q<<endl;
            amount%=50;

        case 3:
            r = amount/20;
            cout<<"20Rs Notes : "<<r<<endl;
            amount%=20;

        case 4:
            s = amount/10;
            cout<<"10Rs Notes : "<<s<<endl;
            amount%=10;

        case 5:
            cout<<"1Rs Coins : "<<amount<<endl;
    }

return 0;
}