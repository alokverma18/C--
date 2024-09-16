#include <iostream> 
using namespace std; 

void arrange(int array[], int n){
    int i=0, j=n-1;

    while(i<=j){
        if(array[i]==0)
            i++;
        if(array[j]==1)
            j--;
        if(array[i]==1 and array[j]==0){
            swap(array[i], array[j]);
            i++; j--;
        }
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

    int i=0, j=n-1;

    while(i<=j){
        if(array[i]==0)
            i++;
        if(array[j]==1)
            j--;
        if(array[i]==1 and array[j]==0){
            swap(array[i], array[j]);
            i++; j--;
        }
    }    

    for(int i=0; i<n; i++)
        cout<<array[i]<<" ";

return 0;
}