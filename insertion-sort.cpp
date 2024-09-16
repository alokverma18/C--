#include <iostream> 
using namespace std; 

void sort(int array[], int n);
int main(){
    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    sort(array,n);
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }
return 0;
}
void sort(int array[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int counter=array[i];
        while(array[j]>counter && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=counter;
    }
}