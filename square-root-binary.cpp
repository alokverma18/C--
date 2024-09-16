#include <iostream> 
using namespace std; 

int rootInt(int n){
    int s=0, e=n, ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;        // better -> s + (e-s)/2  , since s+e can go out of range

        int square = mid*mid;

        if(n==square){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}


int main(){
    
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    cout<<"Root : "<<rootInt(n);
return 0;
}