#include <iostream>
using namespace std;

class Room{
    private:
        float length, breadth, height;

    public: 
        void getdata(){
            cout<<"Enter L, B, H : ";
            cin>>length>>breadth>>height;
        }
        float area(){
            return length*breadth;
        }
        float volume(){
            return length*breadth*height;
        }
};


int main(){

    Room a, b;
    a.getdata();
    b.getdata();
    cout << "Area : " << a.area() <<endl;
    cout << "Volume : " << a.volume()<<endl;

    cout << "Area : " << b.area() <<endl;
    cout << "Volume : " << b.volume();

    return 0;
}
