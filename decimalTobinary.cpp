#include <iostream> 
#include <math.h>
using namespace std; 

int main(){
    
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int m=n;  //storing for another method

    int x=0,i=0;

    while(n!=0){
        int r=n%2;
        x+=r*pow(10,i);
        n/=2;
        i++;
    }

    cout<<"Method 1 : "<<x<<endl;


    int y=0,j=0;

    while(m!=0){
        int r = m&1;
        y+=r*pow(10,j);
        m=m>>1;
        j++;
    }

    cout<<"Method 2 : "<<y;


return 0;
}