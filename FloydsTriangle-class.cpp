#include <iostream> 
using namespace std; 

class Floyd{
    private:
        int n;
    public:
        Floyd(){
            cout<<"Enter number of Rows : ";
            cin>>n;
        }
        ~Floyd(){
            int k=1;
            for(int i=0; i<n; i++){
                for(int j=0; j<=i; j++){
                    cout<<k++<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Floyd f;
return 0;
}