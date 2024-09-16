#include <iostream> 
#include <vector>
using namespace std; 

template <class t>
void display(vector <t> v){
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    vector <int> s;
    cout<<"size of vector 's' : "<<s.size()<<endl;
    int n,x;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter the values : ";
    for(int i=0; i<n; i++){
        cin>>x;
        s.push_back(x);                     // inserts at last
    }
    cout<<"size of vector 's' : "<<s.size()<<endl;                   
    display(s);

    vector <float> p(5, 16.5);   
    cout<<"A vector of size 5 with same values 16.5 "<<endl;
    display(p);       // same function for vectors of all data types using template 

    cout<<"A vector 'r' copied from the vector 's' "<<endl;
    vector <int> r(s);              
    display(r);

    cout<<"Front Element : "<<s.front()<<" Last Element : "<<s.back()<<endl;

    cout<<"Last element removed using pop_back() "<<endl;
    s.pop_back();                               // removes last element
    display(s);

    cout<<"Inserting an element at position 1 "<<endl;
    vector <int> :: iterator it = s.begin();        // iterator declaration and initialisation 

    s.insert(s.begin()+1, 917);                            // vector.insert(position, value);
    display(s); 

    it=s.end();

    /* cout<<"Inserting another element at position 3 from end "<<endl;
    s.insert(it-2, 918);
    display(s);
 */
    cout<<"Inserting 3 elements at certain position  "<<endl;
    it=s.begin();

    s.insert(s.begin(),3,100);               
                                        // vector.insert(pos, number of values to insert, value);
    display(s);

    cout<<"Deleting an element from beginning "<<endl;
    s.erase(s.begin());                 
    display(s);

    cout<<"Deleting a group of elements (3) from end "<<endl;
    s.erase(s.begin(), s.begin()+2);
    display(s);

return 0;
}