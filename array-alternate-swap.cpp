#include <iostream> 
using namespace std; 

void swapAlternate(int array[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size)
            swap(array[i],array[i+1]);
    }
}
int main(){
    
    int n;
    cout<<"Enter the number of Elements : ";
    cin>>n;

    int array[n];

    cout<<"Enter the Elements : ";
    
    for(int i=0; i<n; i++)
        cin>>array[i];

    swapAlternate(array,n);

    for(int i=0; i<n; i++)
        cout<<array[i]<<" ";
    
return 0;
}