#include <iostream> 
using namespace std; 

int findDuplicate(int array[], int size){
    int duplicate=0;
    for(int i=0; i<size; i++){
        duplicate ^= (array[i]^(i+1));
    }
    return duplicate^size;
}

int findDuplicate2(int array[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=array[i];
    }
    int x = size*(size-1)/2;    // sum of numbers from 1 to n-1
    return sum-x;
}

int main(){
    
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";

    // N elements : All numbers in range 1 to N-1 occurs at least ONCE, and only One of them occurs twice

    for(int i=0; i<n; i++)
        cin>>array[i];

    cout<<"Method 1 : \nDuplicate Element : "<<findDuplicate(array, n);

    cout<<"\n\nMethod 2: \nDuplicate Element : "<<findDuplicate2(array, n);


    
return 0;
}