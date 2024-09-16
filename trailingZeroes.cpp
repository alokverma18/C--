#include <iostream> 
using namespace std; 

int trail(int n){
    int r=0;
    for(int i=5; i<=n; i*=5){
        r+=n/i;
    }
    return r;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Number of trailing Zeroes in Factorial of n : "<<trail(n);
return 0;
}