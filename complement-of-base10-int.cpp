#include <iostream> 
using namespace std; 

int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    if(n==0){
        cout<<"Compliment : "<<1;
        return 0;
    }
    int m=n, count=0, mask=0;

    while(m!=0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int result = (~n) & (mask);

    cout<<"Compliment : "<<result;

return 0;
}