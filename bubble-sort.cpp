#include <iostream> 

using namespace std; 

int n=5;
class sort{
    private:
        //int arr[n];
    public:
    int arr[10]; 
        //void get();
        //void bubble();
        //void out();
        void get(){
            for(int i=0; i<n; i++)
                cin >> arr[i];
        }
        void bubble(){
            for(int i=0; i<n-1; i++){
                for(int j=0; j<n-i-1; j++){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }
void out(){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
};


int main(){
    sort s;
    s.get();
    s.bubble();
    s.out();

  
return 0;
}