#include <iostream> 
#include <math.h>

using namespace std; 

bool isPowerOfTwo(int n){
    int a=1;

    for(int i=0; i<=30; i++){
        if(a==n)
            return true;
        //if(a<INT64_MAX/2)                           Handling Edge case 
            a*=2;
    }
    return false;
}
int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    if(isPowerOfTwo(n))
        cout<<"It's a Power of Two";

    else
        cout<<"Nah, it's not a Power of Two";

return 0;
}

//Brute Force

/*
    bool isPowerOfTwo(int n){
    for(int i=0; i<=30; i++){
        if(pow(2,i)==n)
            return true;
    }
    return false;
    }
*/