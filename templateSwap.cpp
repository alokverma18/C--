#include <iostream> 
using namespace std; 

template <class t>
void swapp(t &x, t &y){
    t z=x;
    x=y;
    y=z;
}
int main(){
    int a=16, b=17;
    swapp(a,b);
    cout<<a<<" "<<b<<endl;

    char x='a', y='b';
    swapp(x,y);
    cout<<x<<" "<<y<<endl;

    float p=3.4, q=6.8;
    swapp(p,q);
    cout<<p<<" "<<q<<endl;
    
return 0;
}