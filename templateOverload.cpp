#include <iostream> 
using namespace std; 

template <class t>
void swapp(t &x, t &y){
    cout<<"Template Function \n";
    t z=x;
    x=y;
    y=z;
}

void swapp(int &x, int &y){
    cout<<"Explicit Function \n";
    int z=x;
    x=y;
    y=z;
}
int main(){
    
    char x='a', y='b';
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
  
    int a=16, b=17;
    swapp(a,b);
    cout<<a<<" "<<b<<endl;

    float p=3.4, q=6.8;
    swapp(p,q);
    cout<<p<<" "<<q<<endl;
    
return 0;
}