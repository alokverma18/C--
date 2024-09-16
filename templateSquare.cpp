#include <iostream> 
using namespace std; 

template <class t>

t square(t x){
    return x*x;
}

int main(){
    int x;
    float y;
    cout<<"Enter an Integer : ";
    cin>>x;
    cout<<"Square of "<<x<<" : "<<square(x)<<endl;
    cout<<"Enter a Float : ";
    cin>>y;
    cout<<"Square of "<<y<<" : "<<square(y)<<endl;
    
    return 0;
}