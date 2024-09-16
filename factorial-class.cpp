#include <iostream> 
using namespace std; 
class Factorial{
    private:
        int n;
    public:
        void get(){
            cout<<"Enter a Number : ";
            cin>>n;
        }
        int fact();
};
int Factorial::fact(){
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}
int main(){
    Factorial f;
    f.get();
    cout<<f.fact();
return 0;
}