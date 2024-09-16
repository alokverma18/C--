#include <iostream> 
using namespace std; 

int main(){
    int n, twoThousand, fiveCents, twoCents, cent, fifty, twenty, ten, five, two, one;
    cout<<"Enter the Amount : ";
    cin>>n;
    twoThousand=n/2000;
    fiveCents=(n%2000)/500;
    twoCents=((n%2000)%500)/200;
    cent=(((n%2000)%500)%200)/100;
    fifty=((((n%2000)%500)%200)%100)/50;
    twenty=(((((n%2000)%500)%200)%100)%50)/20;
    ten=((((((n%2000)%500)%200)%100)%50)%20)/10;
    five=(((((((n%2000)%500)%200)%100)%50)%20)%10)/5;
    two=((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)/2;
    one=((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)%2;
    cout<<"Total number of Notes & Coins : "<<endl;
    cout<<"2000 : "<<twoThousand<<endl<<"500 : "<<fiveCents<<endl<<"200 : "<<twoCents<<endl<<"100 : "<<cent<<endl<<"50 : "<<fifty<<endl<<"20 : "<<twenty<<endl<<"10 : "<<ten<<endl<<"5 : "<<five<<endl<<"2 : "<<two<<endl<<"1 : "<<one;


return 0;
}