#include <iostream> 
using namespace std; 

template <class t>
class hey{
    private:
        t x;
    public:
        hey(t y){
            x=y;
        }
        void out(){
            cout<<x<<endl;
        }
};
int main(){
    hey <int> s(16);
    hey <char> a('z');
    hey <double> l(17.5);
    s.out();
    a.out();
    l.out();
return 0;
}