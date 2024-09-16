#include <iostream> 
using namespace std; 

int main(){
    int a[5]={10,20,30,40,50},k;
    for(int i=0;i<5;i++){
        cout<<i<<" : "<<a[i]<<endl;
    }
    cout<<"enter the index to delete an element : ";
    cin>>k;
    
    for(int i=k;i<4;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<4;i++){
        cout<<i<<" : "<<a[i]<<endl;
    }
return 0;
}