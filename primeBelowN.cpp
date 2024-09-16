#include <iostream> 
using namespace std; 
void prime(int n){
    bool a[n+1];
    for(int i=0; i<=n; i++)
        a[i]=true;
    for(int i=2; i<=n; i++){
        if(a[i])
            cout<<i<<" ";
        for(int j=i*i; j<=n; j+=i)
            a[j]=false;
    }
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Prime numbers till "<<x<<" : ";
    prime(x);
return 0;
}