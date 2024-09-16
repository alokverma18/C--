#include <iostream> 
using namespace std; 

int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";

    for(int i=0;i<n-2;i++){
        int c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
return 0;
}