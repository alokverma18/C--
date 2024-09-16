#include <iostream> 
using namespace std; 

template <class x, class y>
class BenStokes{
    private:
        x a;
        y b;
    public:
        BenStokes(x p, y q){
            a=p;
            b=q;
        }
        void out(){
            cout<<a<<endl<<b<<endl;
        }
};
int main(){
    BenStokes <int, string> s(917,"ak");
    BenStokes <string, int> n("vk",18);
    BenStokes <char, char> p('v','c');
    s.out();
    n.out();
    p.out();
return 0;
}