#include <iostream> 
using namespace std; 
void pFactors(int n){
    if(n==1)
        return;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)
        cout<<n;
}
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    cout<<"Prime Factors : ";
    pFactors(x);
return 0;
}