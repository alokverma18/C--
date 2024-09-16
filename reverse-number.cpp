#include <iostream> 
using namespace std; 

int main(){
    
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int num=0;

    while(n>0){
        int r=n%10;
        /*
        if(num>INT_MAX/10 || num<INT_MIN/10){
            return 0;
        }
        */
        num=10*num+r;
        n/=10;
    }

    cout<<"Reversed Number : "<<num;

return 0;
}