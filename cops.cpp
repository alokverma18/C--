#include <iostream>
using namespace std;

int main() {
	int a[101],i,j,t,p,q,r,m,x,y,cnt;
	
	 cin>>t;
	 while(t--){
	     for(i=0;i<101;i++)
	         a[i]=0;
	     cnt=0;
	     cin>>m>>x>>y;
	     int s[m];
	     for(i=0;i<m;i++){
	        cin>>s[i];
	        r=s[i];
	        int p=r-x*y,q=r+x*y;
	        for(j=1;j<101;j++){
	            if(j>=p && j<=q)
                    a[j]=1;
            }
	     }
	     for(i=1;i<101;i++){
	        if(a[i]==0)
	            cnt++;
	     }
	     cout<<cnt<<endl;
	 }
	return 0;
}