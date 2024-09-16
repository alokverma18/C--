#include <iostream> 
#include <fstream>
using namespace std; 

int main(){
    
    fstream f;
    f.open("Kohli.txt",ios::in);
    if(!f)
        cout<<"No such file";
    else{
        char x;
        while(!f.eof()){
            f>>noskipws>>x;
            cout<<x;
        }
    }
return 0;
}