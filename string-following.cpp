#include <iostream>
#include <string.h> 
using namespace std; 

int main(){
    char str[15];
    cin >> str;
    for(int i=0; i<strlen(str); i++){
        str[i]=str[i]+1;
    }
    cout << str;
return 0;
}