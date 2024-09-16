#include <iostream> 
using namespace std; 

int findUnique(int array[], int size){
    int unique = 0;
    for(int i=0; i<size; i++)
        unique ^= array[i];

    return unique;
    
}

int main(){
    
    // size = 2m+1, where m elements occur twice and only 1 of them occurs ONCE

    int n;
    cout<<"Size of Array : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";

    for(int i=0; i<n; i++)
        cin>>array[i];  

    cout<<"Unique Element : "<<findUnique(array, n);  

return 0;
}