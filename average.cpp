#include <iostream> 
using namespace std; 

int main(){
    int i=0,x,sum=0;
    cin>>x;
    while(x){
        if(x<0)
          goto neg;
        sum+=x;
        i++;
        cin>>x;
    }   
    neg: 
        cout << sum/i << endl;
return 0;
}
