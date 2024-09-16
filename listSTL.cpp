#include <iostream> 
#include <list>
using namespace std; 

void show(list<int> a){
    for(auto it=a.begin(); it!=a.end(); it++)
        cout<<(*it)<<" ";
    cout<<endl;
}
int main(){ 
    
    list<int> a;
    cout<<"Size after Creation : "<<a.size()<<endl;

    a.push_back(18);
    a.push_back(17);
    a.push_back(15);
    a.push_back(16);
    a.push_front(19);

    cout<<"Elements : ";
    show(a);

    cout<<"Size after Insertion : "<<a.size()<<endl;

    a.reverse();
    cout<<"After Reversing : ";
    show(a);

    a.sort();
    cout<<"After Sorting : ";
    show(a);

    cout<<"After pop_back() : ";
    a.pop_back();
    show(a);

    cout<<"After pop_front() : ";
    a.pop_front();
    show(a);

    
    list<int> :: iterator it=a.begin();
    advance(it,2);
    a.insert(it,20);
    cout<<"After inserting 20 at third position : ";
    show(a);

    it=a.begin();
    advance(it,2);
    cout<<"After erasing the third element : ";
    a.erase(it);
    show(a);

    cout<<"After Removing 18 : ";
    a.remove(18);
    show(a);

    list<int> b = {10,9,16,11,17};
    cout<<"b : ";
    show(b);

    a.merge(b);
    cout<<"After merging the a with b : ";
    show(a);

    /* a.unique();
    cout<<"After deleting duplicate consecutive elements : ";
    show(a); */




return 0;
}