#include <iostream> 
#include <vector>
using namespace std; 


vector<int> intersection(int arr1[], int size1, int arr2[], int size2){
    int i=0, j=0;
    vector<int> ans;

    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++; j++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
    return ans;
}
int main(){
    
    int m,n;
    cout<<"Enter size of Array 1 : ";
    cin>>m;

    cout<<"Enter size of Array 2 : ";
    cin>>n;

    int array1[m], array2[n];

    cout<<"Enter the Elements for Array 1 : ";
    for(int i=0; i<m; i++)
        cin>>array1[i];    

    cout<<"Enter the Elements for Array 2 : ";
    for(int i=0; i<n; i++)
        cin>>array2[i]; 

    vector<int> ans = intersection(array1, m, array2, n);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    
return 0;
}