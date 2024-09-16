#include <iostream> 
using namespace std; 
class she{
    private:
        string insta;
        long long number;
    public:
        she(string y, long long z){
            insta=y;
            number=z;
        }
    friend class he;

};

class he{
    public:
        void display(she a){
            cout<<"Her Insta : "<<a.insta<<endl;
            cout<<"Her Number : "<<a.number<<endl;
        }
};
int main(){
    he Raghav;
    she Riya("zoomfire_2",9876543210);
    Raghav.display(Riya);
    //cout<<typeid(Raghav).name();
return 0;
}