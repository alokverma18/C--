#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 

vector<vector<int>> tripletSum(int array[], int size, int sum){
    vector<vector<int>> v;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(array[i]+array[j]+array[k]==sum){
                    vector<int> x;
                    x.push_back(array[i]);
                    x.push_back(array[j]);
                    x.push_back(array[k]);
                    v.push_back(x);
                }
            }
        }
    }

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

    vector<vector<int>> ans = tripletSum(array, n, sum);

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;

        

    
return 0;
}