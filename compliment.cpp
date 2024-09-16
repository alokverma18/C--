#include <iostream>
using namespace std;

int compliment(int n);

int main(){
    int n;
    cin >> n;
    cout << compliment(n);
}
int compliment(int n){

    int k=n,mask=0;
    if(k==0){
        return 1;
    }
    while(k!=0){
        mask=(mask<<1)|1;
        k=k>>1;
    }
    return ((~n) & mask);
}