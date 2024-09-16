#include <iostream> 
#include <vector>

using namespace std; 

void display(vector<int> v){
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    
    vector<int> a(5);

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);

    display(a);

    a.pop_back();
    display(a);



return 0;
}