#include <iostream> 
using namespace std; 

int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    // doesn't work for 1

    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

    if(flag==0)
        cout<<"Not Prime";
    else
        cout<<"Prime";

return 0;
}