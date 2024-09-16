#include<iostream>
#include <math.h>
#include<iomanip>

//#include <bits/stdc++.h>

using namespace std;

double max(double l, double b){
    double p = 12.0;
    double q = -4.0*(l+b);
    double r = l*b;

    double x = (-q - sqrt(q*q - 4.0*p*r))/(2.0*p);

    return (l-2*x)*(b-2*x)*x;
}

int main(){

    double l, b, x;

    cout<<"Enter l and b : ";

    cin>>l>>b;

    double v = 0;

    for(x=0.0; x<l/2 && x<b/2; x+=0.000001){
        if((l-2*x)*(b-2*x)*x > v){
            v = (l-2*x)*(b-2*x)*x;
        }
    }

    cout<<fixed<<setprecision(9)<<v<<endl;

    cout<<fixed<<setprecision(9)<<max(l,b);
}