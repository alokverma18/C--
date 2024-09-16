#include <iostream> 
using namespace std; 

int binarySearch(int array[], int start, int end, int key){
    int s=start, e=end;
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
    return e;
}

int findElement(int array[], int n, int element){
    
    int pivot = pivotIndex(array, n);

    if(element>= array[pivot] && element<=array[n-1]){
        return binarySearch(array, pivot, n-1, element);
    }
    else{
        return binarySearch(array, 0, pivot-1, element);
    }
}

int main(){
    
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";

    for(int i=0; i<n; i++)
        cin>>array[i];

    int k;
    cout<<"Enter Element to Search : ";
    cin>>k;

    cout<<"Pivot Index : "<<pivotIndex(array, n)<<endl;
    cout<<"Index : "<<findElement(array, n, k);

return 0;
}