#include <iostream> 
using namespace std; 

void facts(int n){
    int i;
    for(i=1; i*i<=n; i++){
        if(n%i==0)
            cout<<i<<" ";
    }
    for( ; i>=1; i--){
        if(n%i==0)
            cout<<n/i<<" ";
    }
}
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    cout<<"Factors : ";
    facts(x);
return 0;
}