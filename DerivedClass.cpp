#include <iostream> 
#include <string.h>
using namespace std; 

class Animals{
    private:
        int id;
    public:
        int legs;
        void get(int y){
            legs=y;
        }
    protected:
        void eats(){
            cout<<"I can Eat!"<<endl;
        }
};
class Dog : public Animals{
    private:
        string name;
    public:
        void bark(){
            cout<<"I can Bark!"<<endl;
        }
        void display(){
            cout<<legs<<endl<<name;
        }
};
int main(){
    Animals a;
    Dog d;
    d.get(4);
    d.bark();
    d.display();
return 0;
}