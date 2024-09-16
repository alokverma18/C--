#include <iostream> 
using namespace std; 
int main(){
    
    int a=2;
    int b=a+1;

    if((a=3)==b)
        cout<<"In IF "<<a;
    else
        cout<<"In Else "<<a+1;

return 0;
}