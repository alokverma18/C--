  #include <iostream>
using namespace std;

int fact(int n);

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Factorial of "<< n <<" : " << fact(n);

return 0;
}

int fact (int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}