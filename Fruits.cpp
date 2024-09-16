#include <iostream> 
using namespace std; 
class Fruits{
    protected:
        static int x;
    public:
        void count(){
            cout<<"Fruits : "<<x<<endl;
        }
};
class Apples : public Fruits{
    static int y;
    public:
        Apples(){
            x++;
            y++;
        }
        void count(){
            cout<<"Apples : "<<y<<endl;
        }
};
class Mangoes : public Fruits{
    static int z;
    public:
        Mangoes(){
            x++;
            z++;
        }
        void count(){
            cout<<"Mangoes : "<<z<<endl;
        }
};
int Fruits::x=0;
int Apples::y=0;
int Mangoes::z=0;

int main(){
    Fruits F;
    Apples A;
    Mangoes M;
    F.count();
    A.count();
    M.count();
    Apples A2;
    Apples A3;
    F.count();
    A.count();
    M.count();
return 0;
}