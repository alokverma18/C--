#include <iostream> 
using namespace std; 

int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

float combination(int n, int r){
    return (float)factorial(n)/(factorial(n-r)*factorial(r));
}

float permutation(int n, int r){
    return (float)factorial(n)/factorial(n-r);
}

int main(){
    
    int n,r;

    cout<<"\nEnter 'n' : ";
    cin>>n;
    cout<<"Enter 'r' : ";
    cin>>r;

    if(n>=r){
        cout<<"\nPermutation : "<<permutation(n,r)<<endl;
        cout<<"Combination : "<<combination(n,r)<<endl;
    }
    else{
        cout<<endl<<"n needs to be greater than r  \n\n";
    }
    
    
return 0;
}