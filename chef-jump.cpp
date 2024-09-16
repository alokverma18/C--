#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
	if(n%3==0 || (n%3==1 && n%2!=0))
	    cout<<"YES\n";
	else
	    cout<<"NO\n";
	return 0;
}
