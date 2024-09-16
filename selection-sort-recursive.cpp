#include <iostream> 
using namespace std; 

void sort(int array[], int n, int start){

    if(start>=n-1)
        return;
    int min=start;
    for(int i=start; i<n; i++){
        if(array[i]<array[min])
            min=i;
    } 
    swap(array[start], array[min]);

    sort(array, n, start+1);
}
int main(){
    
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int array[n];

    cout<<"Enter Elements : ";
    
    for(int i=0; i<n; i++)
        cin>>array[i];
    
    sort(array,n,0);

    for(int i=0; i<n; i++)
        cout<<array[i]<<" ";


return 0;
}