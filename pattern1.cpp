#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter a number : ";
    cin >> n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    
}