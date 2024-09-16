#include <iostream> 
using namespace std; 
class Complex{
    private:
        float real;
        float imaginary;

    public:
        void get(){
            cout<<"Real : ";
            cin>>real;
            cout<<"Imaginary : ";
            cin>>imaginary;
        }
        void display(){
            cout<<real<<" + "<<imaginary<<" i "<<endl;
        }
        Complex operator + (Complex c){ 
            Complex Result;
            Result.real=real+c.real;
            Result.imaginary=imaginary+c.imaginary;
            return Result;
        }
}; 

int main(){
    Complex A,B;
    cout<<"Enter values for Complex Number A"<<endl;
    A.get();
    cout<<"Enter values for Complex Number B"<<endl;
    B.get();
    Complex S=A+B;

    A.display();
    B.display();
    S.display();
return 0;
}