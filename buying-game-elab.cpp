#include <iostream> 
using namespace std; 

int main(){
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2 && i%3 && i%5 && i%7)
            c++;
    }
    cout<<c;
return 0;
}