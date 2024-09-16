#include <iostream> 
using namespace std; 
int gcd(int a, int b){
    if(b==0)
        return a;
    else    
        return gcd(b, a%b);
}
int gcd1(int a, int b){
    while(a!=b){
        if(a>b)
            a-=b;
        else    
            b-=a;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    cout<<"GCD : "<<gcd(a,b)<<"  "<<gcd1(a,b);
return 0;
}