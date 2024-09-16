#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(){
        cin>>a>>b;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator + (Complex Y, Complex Z){
    Complex T;
    T.a = Y.a+Z.a;
    T.b = Y.b+Z.b;
    return T;
}
void operator <<(Complex Z){
    cout<<Z.a<<"+i"<<Z.b<<endl;
}
int main()
{
    Complex x,y;
    x.input();
    y.input();
    Complex z=x+y;
    cout<<z<<endl;
}
