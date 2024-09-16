#include <iostream> 
using namespace std; 
class Circle{
    private:
        float r;
    public:
        Circle(float x){
            r=x;
        }
        float para(){
            return 2*22*r/7;
        }
        float area(){
            return 22*r*r/7;
        }
};
int main(){
    float z;
    cout<<"Enter the Radius : ";
    cin>>z;
    Circle A(z);
    cout<<"Circumference : "<<A.para()<<endl;
    cout<<"Area : "<<A.area();
return 0;
}