#include <iostream> 
using namespace std; 

int fibonacci(int n){
    int a=0;
    int b=1;
    
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        int c;
        for(int i=0; i<n-2; i++){
            c = a+b;
            a = b;
            b = c;
        }
    return c;
    }
    
}
int main(){
    
    int n;
    cout<<"Enter the term : ";
    cin>>n;

    cout<<"The "<<n<<" term in Fibonacci Sequence is : "<<fibonacci(n)<<endl<<endl;

return 0;
}