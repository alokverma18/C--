#include <iostream> 
#include <math.h>
using namespace std; 
class Triangle{
    private:
        int x,y,z;
    public:
        void input(){
            cout<<"Enter the Sides : ";
            cin>>x>>y>>z;
        }
        int para(){
            return x+y+z;
        }
        float area(){
            float s=para()/2;
            return sqrt(s*(s-x)*(s-y)*(s-z));
        }
};
int main(){
    Triangle A;
    A.input();
    cout<<"Perimeter : "<<A.para()<<endl;
    cout<<"Area : "<<A.area();
return 0;
}