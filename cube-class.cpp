#include <iostream> 
using namespace std; 

class Cube{
    private:
        int n;
    public:
        Cube(){
            cout<<"Enter a Number : ";
            cin>>n;
        }
        ~Cube(){
            for(int i=1; i<=n; i++){
                cout<<"Cube of "<<i<<" is : "<<i*i*i<<endl;
            }
        }
};
int main(){
    Cube c;
return 0;
}