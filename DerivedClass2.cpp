#include <iostream> 
#include <string.h>
using namespace std; 
class Person{
    private:
        char sex;
    public:
        string name;
        int height, weight;

        void nme(){
            cout<<name;
        }
};
class Student : private Person{
    private:
        int rno;
    public:
        int grade;
        int marks;
        void input(){
            cout<<"Enter Name, Grade and Marks : ";
            cin>>name>>grade>>marks;
        }
        void display(){
            cout<<"Name: "<<name<<endl<<"Grade : "<<grade;
        }
};
int main(){
    Person p;
    Student s;
    s.input();
    s.display();

return 0;
}