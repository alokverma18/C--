#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 

vector<vector<int>> pairSum(int array[], int size, int sum){
    vector<vector<int>> v;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]+array[j]==sum){
                vector<int> x;
                x.push_back(min(array[i], array[j]));
                x.push_back(max(array[i], array[j]));
                v.push_back(x);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}
int main(){
    
    int n, sum;
    cout<<"Enter Size : ";
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)
        cin>>array[i];

    cout<<"Enter Sum : ";
    cin>>sum;

    vector<vector<int>> ans = pairSum(array, n, sum);

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;

        

    
return 0;
}