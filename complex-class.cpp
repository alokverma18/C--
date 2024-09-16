#include <iostream> 
using namespace std; 
class Imaginary{
    private:
        float p,q;
    public:
        void input(){
            cout<<"Real Part : ";
            cin>>p;
            cout<<"Imaginary Part  : ";
            cin>>q;
        }
        void sum(Imaginary B){
            cout<<"Sum = "<<p+B.p<<" + "<<q+B.q<<" i";
        }
};
int main(){
    Imaginary X,Y;
    cout<<"Complex Number 1 \n";
    X.input();
    cout<<"Complex Number 2 \n";
    Y.input();
    X.sum(Y);
return 0;
}