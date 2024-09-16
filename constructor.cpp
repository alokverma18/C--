#include <iostream> 
using namespace std; 
class A{
    private:
        int x;
    public:
        static int z;
        A(int y){
            x=y;
        }
        void display(){
            cout<<x<<endl;
        }
};
int A::z=10;
int main(){
    A a(5);
    A b=a;
    A c(a);
    a.display();
    b.display();
    c.display();
    //a.z=10;
    
    cout<<a.z;
return 0;
}