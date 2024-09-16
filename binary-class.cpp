#include <iostream> 
#include <math.h>
using namespace std; 
class Binary{
    private:
        int n;
    public:
        Binary(){
            cout<<"Enter a Decimal Number (Base 10) : ";
            cin>>n;
    }
        ~Binary(){
            int i=0,r=0;
            while(n>0){
                r+=(n%2)*pow(10,i);
                i++;
                n/=2;
            }
            cout<<"It's Binary Representation : "<<r;
        }
};
int main(){
    Binary a;
return 0;
}