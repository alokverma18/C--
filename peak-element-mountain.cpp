#include <iostream> 
using namespace std; 
int peak(int array[], int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;   
    while(s<e){
        if(array[mid]<array[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return array[mid];
}
int main(){
    
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";
    
    for(int i=0; i<n; i++)
        cin>>array[i];

    cout<<"Peak Element : "<<peak(array,n);
return 0;
}