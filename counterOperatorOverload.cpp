#include <iostream> 
using namespace std; 

class Counter{
    int x;
    public:
        Counter(){
            cout<<"Enter any Value : ";
            cin>>x;
        }
        void out(){
            cout<<x<<endl;
        }
        void operator ++(){
            x++;
        }
};
int main(){
    Counter S;

    ++S;
    S.out();
    ++S;
    S.out();

return 0;
}