#include <iostream> 
using namespace std; 
class Marks{
    protected:
        static int n,phy,che,mat;
        int roll[50]; //,p[50],c[50],m[50];
        string s[50];
    public:
        void get(){
            cout<<"Enter the Number of Students : ";
            cin>>n;
        }
        void avg(){
            cout<<"Physics Average : "<<(float)phy/n<<endl;
            cout<<"Chemistry Average : "<<(float)che/n<<endl;
            cout<<"Maths Average : "<<(float)mat/n<<endl;
            cout<<"Total Average : "<<(float)(phy+che+mat)/n/3<<endl;
        }
};
int Marks::n = 0;
int Marks::phy = 0;
int Marks::che = 0;
int Marks::mat = 0;
class Physics : public Marks{
    public:
        Physics(){
            int p[n];
            for(int i=0;i<n;i++){
                cout<<"Enter the Name of Student : ";
                cin>>s[i];
                cout<<"Enter Physics marks for Student "<<i+1<<" : ";
                roll[i]=i+1;
                cin>>p[i];
                phy+=p[i];
            }
        }
};
class Chemistry : public Marks{
    public:
        Chemistry(){
            int c[n];
            for(int i=0;i<n;i++){
                cout<<"Enter Chemistry marks for Student "<<i+1<<" : ";
                cin>>c[i];
                che+=c[i];
            }
        }
};
class Maths : public Marks{
    public:
        Maths(){
            int m[n];
            for(int i=0;i<n;i++){
                cout<<"Enter Maths marks for Student "<<i+1<<" : ";
                cin>>m[i];
                mat+=m[i];
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