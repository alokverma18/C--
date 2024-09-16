#include <iostream>
using namespace std;

class calculator {
    private:
        int x,y;
        //int y;

    public:
        void get(){
            cin>>x>>y;
        }
        int add();
        int subtract();
        int multiply();
        float divide();
        int modulus();
};
int calculator::add(){
    return x+y;
}
int calculator::subtract(){
    return x-y;
}
int calculator::multiply(){
    return x*y;
}
float calculator::divide(){
    return x/y;
}
int calculator::modulus(){
    return x%y;
}

int main(){
    int r;
    calculator c;

    cout << "MENU: \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Modulus \n Enter your Choice: ";
    cin >> r;
    cout << " Enter two Numbers: ";
    c.get();
    cout << " Result : ";
    switch(r){
        case 1:
            cout << c.add(); break;
        case 2:
            cout << c.subtract(); break;
        case 3:
            cout << c.multiply();
            break;
        case 4: 
            cout << c.divide();
            break;
        case 5:
            cout << c.modulus();
            break;
        default:
            cout << "Invalid Input";
    }

return 0;    
    
}