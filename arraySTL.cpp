#include <iostream> 
#include <array>
using namespace std; 

void printList(array<int,4> a){
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    
    array<int, 4> a = {15,16,17,18};

    cout<<"a : ";
    printList(a);
    
    cout<<"Size : "<<a.size()<<endl<<"Front : "<<a.front()<<endl<<"Back : "<<a.back()<<endl;

    array<int, 4> b;
    b.fill(16);
    cout<<"b : ";
    printList(b);

    a.swap(b);  // to swap the elements
    
    cout<<"After Swap\nb : ";

    for(auto it=b.begin(); it!=b.end(); it++){          //using Iterator
        cout<<(*it)<<" ";
    }
    cout<<endl;


return 0;
}