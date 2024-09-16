#include <iostream> 
using namespace std; 

int pivotIndex(int array[], int n){

    int s=0, e=n-1;

    while(s<e){
        int mid = (s+e)/2;
        if(array[mid]>=array[0])
            s=mid+1;
        else{
            e=mid;
        }
    }
    return s;
}


int main(){
    
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";

    for(int i=0; i<n; i++)
        cin>>array[i];

    cout<<"Pivot Index : "<<pivotIndex(array, n);
return 0;
}