#include <iostream> 
#include <math.h>
using namespace std; 

int main(){
    int n;
    cout<<"Enter a Binary Number : ";
    cin>>n;

    int s=0,i=0;

    while(n!=0){
        int x = n%10;   // n&1
        s+=pow(2,i)*x;
        n/=10;
        i++;
    }

    cout<<"Decimal Form : "<<s;

return 0;
}