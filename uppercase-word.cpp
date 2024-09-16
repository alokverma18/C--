#include <iostream>  
#include <string.h>
using namespace std; 

int main(){
    string s;
    cout<<"Enter a sentence : ";
    getline(cin, s);
    s[0]=toupper(s[0]);
    for(int i=1; i< s.length(); i++){
        if(s[i]==' ')
            s[i+1]=toupper(s[i+1]);
    }
    cout << s;
return 0;
}