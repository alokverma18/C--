#include <iostream> 
using namespace std; 

int first(int array[], int n, int element){

    int s=0, e=n-1;
    
    int ans= -1;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(array[mid]==element){
            ans=mid;
            e = mid-1;
        }
        else if(array[mid]>element){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int last(int array[], int n, int element){

    int s=0, e=n-1;
    
    int ans= -1;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(array[mid]==element){
            ans=mid;
            s = mid+1;
        }
        else if(array[mid]>element){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int count(int array[], int n, int element){
    int x = last(array,n,element);
    int y = first(array,n,element);
    if(x==-1 and y==-1)
        return 0;
    return x-y+1;
}

int main(){
    
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";
    
    for(int i=0; i<n; i++)
        cin>>array[i];

    int element;
    cout<<"Enter Item to Count : ";
    cin>>element;

    cout<<"Total Occurences : "<<count(array,n,element);

return 0;
}