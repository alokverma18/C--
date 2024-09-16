#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int a,i,j,n,q,z,p[10][10];
      cin>>n>>q;
      for(a=0;a<n;a++){
          cin>>z;
          for(i=0;i<z;i++){
              cin>>p[a][i];
          }
      }
      for(j=0;j<q;j++){
          int r,s;
          cin>>r>>s;
          cout<<p[r][s]<<endl;
      }
    return 0;
}