#include <iostream> 
using namespace std; 

void sort(int array[], int n);
int main(){
    int i,n;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements : ";
    for(i=0; i<n; i++){
        cin >> array[i];
    }
    sort(array,n);
    for(i=0; i<n; i++){
        cout << array[i] << " ";
    }
return 0;
}
void sort(int array[], int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}