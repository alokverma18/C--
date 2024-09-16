#include <iostream> 
using namespace std; 
struct stack{
    int top,c,*a;
    stack(int x){
        c=x;
        a=new int[c];
        top=-1;
    }
    void push(int x){
        if(top>=(c-1))
            cout<<"Stack Overflow ";
        else{
            a[++top]=x;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow ";
            return -1;
        }
        else
            return a[top--];
    }
    int size(){
        return top+1;
    }
    int peek(){
        if(top==-1){
            //cout<<"Stack Underflow";
            cout<<"No Element to Show";
            return -1;
        }
        else
        return a[top];
    }
    bool isEmpty(){
        return (top==-1);
    }
    void display(){
        int i=top+1;
        while(i--){
            cout<<a[i]<<" <- ";
        }
    }
};
int main(){
    int n,x,z;
    cout<<"Enter the Size of Stack to be created : ";
    cin>>z;
    stack s(z);
    while(true){
        cout << "\n\nMENU: \n 1. Push \n 2. Pop \n 3. Peek \n 4. Size \n 5. IsEmpty \n 6. Display \n 7. Exit \n Enter your Choice: ";
        cin>>n;
        switch(n){
            case 1:
                cout<<"Enter an Element to Push : ";
                cin>>x;
                s.push(x);
                break;
            case 2:
                cout<<"Popped Element : "<<s.pop();
                break;
            case 3:
                cout << "Element at the Top : "<<s.peek();
                break;
            case 4: 
                cout << "Size : "<<s.size();
                break;
            case 5:
                cout << s.isEmpty();
                break;
            case 6:
                s.display();
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid Input";
        }
    }
return 0;
}