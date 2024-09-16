#include <iostream>
using namespace std;

class minimum{
    private:
        float x,y,z;

    public:
        void get(){
            cin>>x>>y>>z;
        }
        float mini(){
            if(x<y && x<z){
                return x;
            }
            else if (y<z){
                return y;
            }
            else{
                return z;
            }
        }
};

int main(){
    minimum m;
    cout << "Enter three Numbers: ";    
    m.get();
    cout <<"Minimum : "<< m.mini();

return 0;

}
