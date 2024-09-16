#include <iostream> 
using namespace std; 

int setBits(int a, int b){
    if(a==0 && b==0)
        return 0;
        
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a>>=1;
    }
    return count+setBits(b,0);
}
int main(){
    
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    cout<<"Sum of Number of 1's in binary expansions of "<<a<<" and "<<b<<" : "<<setBits(a,b);
return 0;
}