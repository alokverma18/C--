#include <iostream> 
using namespace std; 

float power(float x, int n){
    float res=1;
    while(n){
        if(n%2)
            res*=x;
        x*=x;
        n/=2;
    }
    return res;
}
int main(){
    float x;
    int n;
    cout<<"Enter the Base and Exponent : ";
    cin>>x>>n;
    cout<<"Power of "<<x<<" raised to "<<n<<" is : "<<power(x,n);
return 0;
}