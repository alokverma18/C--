#include <iostream> 
#include <algorithm>
using namespace std; 

int main(){
    int m,n,i,j,max=0,min=0;
    cin>>m>>n;
    int a[n],b[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=1;i<=m;i++){
        sort(a+1,a+n+1);
        sort(b+1,b+n+1);
        max+=a[n];
        a[n]--;

        min+=b[1];
        b[1]--;

        if(!b[1])
            b[1]=100;

    }
    cout<<max<<endl<<min;
return 0;
}