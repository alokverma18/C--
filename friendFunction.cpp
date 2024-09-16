#include <iostream> 
using namespace std; 
class box{
    private:
        int l,b,h;
    public:
        box(int x,int y,int z){
            l=x;
            b=y;
            h=z;
        }

    //Global function display() declared as Friend of box class
    friend void display(box);
};

//Global function accessing private members of class Box

void display(box a){
    cout<<"Length : "<<a.l<<endl;
    cout<<"Breadth : "<<a.b<<endl;
    cout<<"Height : "<<a.h<<endl;
    cout<<"Volume : "<<a.l*a.b*a.h;
}
int main(){
    box a(3,4,5);
    display(a);
return 0;
}