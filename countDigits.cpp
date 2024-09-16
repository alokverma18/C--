#include <iostream> 
#include <math.h>
using namespace std; 

int count(int n){
    int c=0;
    while(n){
        n/=10;
        c++;
    }
    return c;
}
int cnt(int n){
    return floor(log10(n))+1;
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    cout<<"Using loop : "<<count(n)<<endl;
    cout<<"Using log : "<<cnt(n);
return 0;
}