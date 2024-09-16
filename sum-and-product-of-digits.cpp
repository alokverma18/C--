#include <iostream> 
using namespace std; 

int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int sum=0, product=1;

    for(; n>0; n/=10){
        int r=n%10;
        sum+=r;
        product*=r;
    }

    cout<<"Sum : "<<sum<<" Product : "<<product;
return 0;
}