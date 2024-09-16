#include <iostream> 
using namespace std; 
class person{
    public:
        int id;
        person(){
            cout<<"Person Constructor is Called \n";
        }

    protected:
        char name[100];
};
class student : private person{
    public:
        void input(){
            cin>>id>>name>>course>>gpa;
        }
        char course[100];
        float gpa;
        void display(){
            cout<<id<<" "<<name<<" "<<" "<<course<<" "<<gpa;
        }
        student(){
            cout<<"Student Constructor is Called\n";
        }
};
int main(){
    student s;
    s.input();
    s.display();
return 0;
}