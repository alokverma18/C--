#include <iostream> 
using namespace std; 
class swapp{
    float a;
    public:
        void in(){
            cin>>a;
        }
        float out(){
            return a;
        }
        void operator ^ (swapp &p){
            float t=a;
            a=p.a;
            p.a=t;
        }
};
int main(){
    swapp A,B;
    cout<<"Enter value of a for object A : ";
    A.in();
    cout<<"Enter value of a for object B : ";
    B.in();
    A^B;
    cout<<"Value of a in object A : "<<A.out()<<endl;
    cout<<"Value of a in object B : "<<B.out()<<endl;
return 0;
}