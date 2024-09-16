#include <iostream> 
using namespace std; 

class stringss{
    private:
        string a;
    public:
        void input(){
            cout<<"Enter a String : ";
            cin>>a;
        }
        void operator =(stringss B){
            if(a.compare(B.a)==0)
                cout<<"Strings are Equal"<<endl;
            else if(a.compare(B.a)>0)
                cout<<a<<" is greater than "<<B.a<<endl;
            else
                cout<<a<<" is lesser than "<<B.a<<endl;
        }
};

int main(){
    stringss a,b;
    a.input();
    b.input();
    a=b;
return 0;
}