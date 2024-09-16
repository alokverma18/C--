#include <iostream>
#include <math.h> 
using namespace std; 

int main(){
    int n,i=0,r=0;
    cout<<"Enter a Number : ";
    cin>>n;
    while(n>0){
        r+=(n%2)*pow(10,i);
        i++;
        n/=2;
    }
    cout<<r;
return 0;
}