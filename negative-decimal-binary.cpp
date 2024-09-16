#include <iostream> 
#include <math.h>
using namespace std; 

int toDecimal(int n){
    int s=0,i=0;
    while(n!=0){
        int x = n%10;   // n&1
        s+=pow(2,i)*x;
        n/=10;
        i++;
    }
    return s;
}

int toBinary(int n){
    int x=0,i=0;
    while(n!=0){
        int r=n%2;
        x+=r*pow(10,i);
        n/=2;
        i++;
    }
    return x;
}

int main(){
    int n;
    cout<<"Enter a Negative Number : ";
    cin>>n;

    n*=-1;
    n = ~n;     

    cout<<n<<endl;
    cout<<toBinary(n+1);        // Incorrect


return 0;
}