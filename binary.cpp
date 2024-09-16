#include <iostream> 
using namespace std; 

int bin(int array[], int n, int key);

int main(){
    int n,i,key;
    cout << "Enter the length of array : ";
    cin >> n;
    cout << "Enter the elements in ascending order : ";
    int array[n];
    for(i=0; i<n; i++){
        cin >> array[i];
    }
    cin >> key;
    cout << bin(array,n,key);
return 0;
}

int bin(int array[], int n, int key){
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;        // better -> s + (e-s)/2  , since s+e can go out of range
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}