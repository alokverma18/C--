#include <iostream> 
using namespace std;

void bubble(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    bubble(array,n);
    for(int i=0; i<n; i++){
        cout << array[i] << "  ";
    }
    
return 0;
}