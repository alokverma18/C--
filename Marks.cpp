#include <iostream> 
using namespace std; 
class Marks{
    protected:
        static int n;
        int roll[50],p[50],c[50],m[50];
        string s[50];
    public:
        void get(){
            cout<<"Enter the Number of Students : ";
            cin>>n;
            for(int i=0;i<n;i++){
                p[i]=0;
                c[i]=0;
                m[i]=0;
            }
        }
        void avg(){
            int phy=0,che=0,mat=0;
            for(int i=0;i<n;i++){
                phy+=p[i];
                che+=c[i];
                mat+=m[i];
            }
            cout<<"Physics Average : "<<phy/n<<endl;
            cout<<"Chemistry Average : "<<che/n<<endl;
            cout<<"Maths Average : "<<mat/n<<endl;
            cout<<"Total Average : "<<(phy+che+mat)/n<<endl;
        }
};
int Marks::n = 0;

class Physics : public Marks{
    public:
        Physics(){
            for(int i=0;i<n;i++){
                cout<<"Enter Physics marks for Student "<<i+1<<" : ";
                roll[i]=i+1;
                cin>>p[i];
            }
        }
};
class Chemistry : public Marks{
    public:
        Chemistry(){
            for(int i=0;i<n;i++){
                cout<<"Enter Chemistry marks for Student "<<i+1<<" : ";
                cin>>c[i];
            }
        }
};
class Maths : public Marks{
    public:
        Maths(){
            for(int i=0;i<n;i++){
                cout<<"Enter Maths marks for Student "<<i+1<<" : ";
                cin>>m[i];
            }
        }
};
int main(){
    Marks C2;
    C2.get();
    Physics A;
    Chemistry B;
    Maths C;
    C2.avg();
return 0;
}