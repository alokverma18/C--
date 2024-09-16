#include <iostream>
using namespace std;

int reverse(int n);
int main(){
    int n;
    cin >> n;
    cout << reverse(n);
}
int reverse (int n){
    int r,s;
    while(n!=0){
        r=n%10;
        if(s<INT32_MIN/10 || s>INT32_MAX/10){
            return 0;
        }
        s=s*10+r;
        n/=10;
    }
    return s;
}