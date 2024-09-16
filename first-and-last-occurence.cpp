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
int main(){
    
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int array[n];

    //sorted array to be passed
    
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
        cin>>array[i];

    int element;
    cout<<"Enter the Element : ";
    cin>>element;

    cout<<"First Occurence : "<<first(array, n, element);
    cout<<"\nLast Occurence : "<<last(array, n, element);

        
return 0;
}