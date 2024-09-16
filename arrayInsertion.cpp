#include <iostream> 
using namespace std; 

int main(){
    int a[6];
    a[0]=10;
    a[1]=20;
    a[2]=30;
    int n=3;
    for(int i=0;i<n;i++){
        cout<<i<<" : "<<a[i]<<endl;
    }
    int k,x;
    cout<<"Enter an element to insert : ";
    cin>>x;
    cout<<"Enter the index : ";
    cin>>k;
    for(int i=n;i>=k;i--){
        a[i]=a[i-1];
    }
    a[k]=x;
    for(int i=0;i<n+1;i++){
        cout<<i<<" : "<<a[i]<<endl;
    }
    cout<<sizeof(a);
    
return 0;
}