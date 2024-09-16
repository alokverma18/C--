#include <iostream> 
using namespace std; 

//Numbering starts from Zero
int lastMan(int n, int k){
    if(n==1)
        return 0;
    else
        return (lastMan(n-1,k)+k)%n;
}
//Numbering starts from 1

int lastMan1(int n, int k){
    return 1+lastMan(n,k);
}
int main(){
    cout<<lastMan(5,3)<<endl;
    cout<<lastMan1(5,3)<<endl;
    cout<<lastMan(7,3)<<endl;
    cout<<lastMan1(7,3)<<endl;
    cout<<lastMan(8,2)<<endl;
    cout<<lastMan1(8,2)<<endl;
    cout<<lastMan(4,2)<<endl;
    cout<<lastMan1(4,2)<<endl;
    
return 0;
}