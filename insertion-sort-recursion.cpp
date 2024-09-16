#include <iostream> 
using namespace std; 

void insert(int array[], int start, int n){

    int key=array[start];
    int j=start-1;

    while(j>=0 && array[j]>key){
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=key;
}

void sort(int array[], int start, int n){

    if(start>=n)
        return;
    insert(array, start, n);
    sort(array, start+1, n);
}

int main(){
    
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";
    
    for(int i=0; i<n; i++)
        cin>>array[i];
    
    sort(array, 0, n);

    for(int i=0; i<n; i++)
        cout<<array[i]<<" ";


return 0;
}