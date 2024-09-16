#include <iostream>
using namespace std;

bool prime(int n);

int main(){
    int n;
    cin  >> n;
    if(prime(n)){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
}
bool prime(int n){
    int x=2;
    if(n<2){
        return 0;
    }
    while(n%x != 0 && x<=n){
        x+=1;
    }
    if(x==n){
        return 1;
    }
    else{
        return 0;
    }
}