#include <iostream> 
using namespace std; 

void decimalToHexa(int n){
    if(n==0)
        return;
    decimalToHexa(n/16);
    if(n%16<10)
        cout<<n%16;
    else{
        char z='A';
        char x=z+n%16-10;
        cout<<x;
    }
}
int main(){
    int n;
    cout<<c<<endl;
    cout<<"Enter a Base 10 Number : ";
    cin>>n;
    decimalToHexa(n);
return 0;
}