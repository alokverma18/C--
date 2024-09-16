#include <iostream> 
using namespace std; 
class Pyramid{
    private:
        int n;
    public:
        Pyramid(){
            cout<<"Enter the number of Rows : ";
            cin>>n;
        }
        ~Pyramid(){
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    cout<<" ";
                }
                for(int k=0; k<2*i+1; k++){
                    cout<<"*";
                }
                cout<<endl;
            }
            
        }
};
int main(){
    Pyramid p;
return 0;
}