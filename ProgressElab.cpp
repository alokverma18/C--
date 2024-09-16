#include <iostream> 
using namespace std; 

int main(){
    
    int n,k,t;
    cin>>n>>k>>t;    //17 4  61
    int z=t/k;
    while(z--)
        cout<<k<<" ";

    cout<<t%k<<" ";

    int x= n-(t/k)-1;
    while(x--)
        cout<<0<<" ";

return 0;
}