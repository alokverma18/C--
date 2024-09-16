#include <iostream> 
using namespace std; 

template <class t = int , class u = char >
class bc{
    private:
        t x;
        u y;
    public:
        bc(t a, u b){
            x=a;
            y=b;
        }
        void nikalbsdk(){
            cout<<x<< " "<<y<<endl;
        }
};
int main(){
    bc <string,string> peter("chal","Chutiye");         // both changed
    peter.nikalbsdk();

    bc <> zen(6,'c');           // default types
    zen.nikalbsdk();

    bc <string> sigma("Binod",'x');         // first data type changed to string, second remains same
    sigma.nikalbsdk();

return 0;
}