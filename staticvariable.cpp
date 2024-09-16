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
        static void display(){
            z=50;
            cout<<z<<endl;
        }
};
int A::z=10;
void fun(){
    int b=1;
    static int c=1;
    cout<<b<<" "<<c<<endl;
    b++;
    c++;
}
int main(){
    
    for(int t=0;t<5;t++)
        fun();
    A a(20);
    a.display();
    A::display();
return 0;
}