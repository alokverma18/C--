#include <iostream> 
using namespace std; 
void subsequence(string s, string curr="",int i=0){
    if(i==s.length()){
        cout<<s<<endl;
        return;
    }
    subsequence(s,curr,i+1);
    subsequence(s,curr+s[i],i+1);
}
int main(){
    string s="ABC";
    subsequence(s);
return 0;
}