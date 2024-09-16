#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout << "Enter a number : ";
    cin >> n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    i=1;
    while (i<=n){
        k=0;
        j=n-i;
        while(j>0){
            cout << " ";
            j-=1;
        }
        while(k<i){
        cout << "*";
        k+=1;
        }
        i+=1;
        cout << endl;

    }

    i=1;
    while(i<=n){
        j=0;
        while(j<n-i){
            cout << " ";
            j++;
        }
        k=0;
        while(k<2*i-1){
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
}