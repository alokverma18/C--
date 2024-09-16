#include <iostream> 
using namespace std; 
int power(int x, int y);
int main(){
    int x,y;
    cout << "Base : ";
    cin >> x;
    cout << "Exponent : ";
    cin >> y;
    cout << "Result : " << power(x,y);
    
return 0;
}
int power(int x, int y){
    if(y==1)
        return x;
    else if(y==0)
        return 1;
    return x*power(x,y-1);
}