#include <iostream>
using namespace std;
class compare{
    private:
        int n;
    public:
        void get(){
            cin>>n;
        }
        int arm(){
            int r=0,i=n;
            while(i){
                r+=(i%10)*(i%10)*(i%10);
                i/=10;
            }
            return r;
        }
        void operator ==(){
            if(n==arm())
                cout<<"Armstrong number";
            else
                cout<<"Not an Armstrong number";
        }
};

int main()
{
    compare A;
    A.get();
    ==A;

	return 0;
}