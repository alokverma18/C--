#include <iostream> 
#include <string.h>

using namespace std; 

void strings(){
    char str[20],y;
    cout << "Enter a string : ";
    cin >> str;
    int x=strlen(str);
    for(int i=0;i<x/2;i++){
        y=str[i];
        str[i]=str[x-i-1];
        str[x-i-1]=y;
    }
    cout << "Reversed string : "<<str;
}
int main(){
    
    strings();
    
return 0;
}