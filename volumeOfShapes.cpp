#include <iostream> 
#include <math.h>
using namespace std; 
class sphere{
    private:
        float r;
    public:
        sphere(float x){
            r=x;
        }
        void  volume(){
            cout<<"Volume of Sphere with radius "<<r<<" is : "<<3*22*r*r*r/7/4<<endl;
        }
};
class cylinder{
    private:
        float r;
        int h;
    public:
        cylinder(float a, int b){
            r=a;
            h=b;
        }
        void  volume(){
            cout<<"Volume of Cylinder with radius "<<r<<" and height "<<h<<" is : "<<22*r*r*h/7<<endl;
        }
};
class cube{
    private:
        int a;
    public:
        cube(int x){
            a=x;
        }
        void  volume(){
            cout<<"Volume of Cube with side "<<a<<" is : "<<a*a*a<<endl;
        }
};
class cuboid{
    private:
        int l,b,h;
    public:
        cuboid(int x, int y, int z){
            l=x;
            b=y;
            h=z;
        }
        void  volume(){
            cout<<"Volume of Cuboid with sides "<<l<<","<<b<<","<<h<<" is : "<<l*b*h<<endl;
        }
};

int main(){
    sphere A(28);
    cuboid B(3,4,5);
    cube C(5);
    cylinder D(2,7);
    A.volume();
    B.volume();
    C.volume();
    D.volume();

return 0;
}