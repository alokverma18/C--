#include <iostream> 
using namespace std; 

template <class t>

void bubble(t arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                t temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
template <class t>

void display(t array[], int n){
    cout<<"Sorted : ";
    for(int i=0; i<n; i++){
        cout << array[i] << "  ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements (integers): ";
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    bubble <int> (array,n);
    display <int> (array,n);

    int m;
    cout << "Enter the length of array: ";
    cin >> m;
    float array2[m];
    cout << "Enter the elements (floating-point): ";
    for(int i=0; i<m; i++){
        cin >> array2[i];
    }
    bubble <float> (array2,m);
    display <float> (array2,m);
return 0;
}