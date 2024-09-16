#include <iostream> 
using namespace std; 

int main(){
    char str[20],y;
    cin >> str;
    
    //Calculating length
    int x=1;
    while(str[x]!='\0'){
        x++;
    }
    for(int i=0;i<x/2;i++){
        y=str[i];
        str[i]=str[x-i-1];
        str[x-i-1]=y;
    }
    cout << str;

return 0;
}