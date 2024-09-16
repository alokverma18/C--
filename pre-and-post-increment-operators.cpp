#include <iostream> 
using namespace std; 
int main(){
    
    int a = 1;
    int b = 2;

    if(a-- > 0 && ++b > 2)
        cout<<"If\n";
    else
        cout<<"Else\n";

    cout<<a<<" "<<b;


    cout<<"\n\n\n\n";

    int x=3;

    cout<<(25 * (++x));

    cout<<"\n\n\n";

    a=1;
    b=a++;
    x=++a;

    cout<<b<<" "<<x;


return 0;
}