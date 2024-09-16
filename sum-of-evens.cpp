#include <iostream> 
using namespace std; 


int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int i=0, sum=0;

    while(i<=n){
        sum+=i;
        i+=2;
    }

    cout<<"Sum of Even numbers upto "<<n<<" is "<<sum;
return 0;
}
