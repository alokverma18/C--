#include <iostream> 
#include <math.h>
using namespace std; 
class circle{
    private:
        float r;
    public:
        circle(float x){
            r=x;
        }
        void  area(){
            cout<<"Area of Circle with radius "<<r<<" is : "<<22*r*r/7<<endl;
        }
};
class triangle{
    private:
        int x,y,z;
    public:
        triangle(int a, int b, int c){
            x=a;
            y=b;
            z=c;
        }
        void  area(){
            int s=(x+y+z)/2;
            cout<<"Area of Triangle with sides "<<x<<","<<y<<","<<z<<" is : "<<sqrt(s*(s-x)*(s-y)*(s-z))<<endl;
        }
};
class square{
    private:
        int a;
    public:
        square(int x){
            a=x;
        }
        void  area(){
            cout<<"Area of Square with side "<<a<<" is : "<<a*a<<endl;
        }
};
class rectangle{
    private:
        int l,b;
    public:
        rectangle(int x, int y){
            l=x;
            b=y;
        }
        void  area(){
            cout<<"Area of Rectangle with sides "<<l<<","<<b<<" is : "<<l*b<<endl;
        }
};

int main(){
    circle A(7);
    triangle B(3,4,5);
    square C(5);
    rectangle D(4,5);
    A.area();
    B.area();
    C.area();
    D.area();

return 0;
}