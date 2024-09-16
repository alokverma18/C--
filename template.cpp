#include <iostream> 
using namespace std; 
template <class t>
t square(t x){
    return x*x;
}
int square2(int x){
    return x*x;
}

int main(){
    cout<<"Function using Templates\n";
    cout<<square(5)<<endl;                  //takes input as integer
    cout<<square(5.5)<<endl;                //takes input as double

    cout<<"Simple Function\n";
    cout<<square2(5.5);                        //takes input as integer only
return 0;
}