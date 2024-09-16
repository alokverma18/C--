#include <iostream> 
using namespace std; 
struct node{
    int data;
    struct node *next;

    node(int x){
        data=x;
        next=NULL;
    }
};
void push(node **top, int x){
    node *newNode=new node(x);
    if(*top==NULL){
        *top=newNode;
    }
    else{
        newNode->next=*top;
        *top=newNode;
    }
}
int pop(node **top){
    if((*top)==NULL){
        cout<<"Stack Underflow ";
        return -1;
    }
    int x=(*top)->data;
    node *p=*top;
    (*top)=(*top)->next;
    free(p);
    return x;
}
int peek(node *top){
    if(top==NULL){
        cout<<"Empty ";
        return -1;
    }
    int x=top->data;
    return x;
}
bool isEmpty(node *top){
    return top==NULL;
}
void display(node *top){
    while(top!=NULL){
        cout<<top->data<<" -> ";
        top=top->next;
    }
}
int size(node *top){
    int c=0;
    while(top!=NULL){
        c++;
        top=top->next;
    }
    return c;
}
int main(){
    int n,x;

    node *top=NULL;
    while(true){
        cout << "\n\nMENU: \n 1. Push \n 2. Pop \n 3. Peek \n 4. Size \n 5. IsEmpty \n 6. Display \n 7. Exit \n Enter your Choice: ";
        cin>>n;
        switch(n){
            case 1:
                cout<<"Enter an Element to Push : ";
                cin>>x;
                push(&top,x);
                break;
            case 2:
                cout<<"Popped Element : "<<pop(&top);
                break;
            case 3:
                cout << "Element at the Top : "<<peek(top);
                break;
            case 4: 
                cout << "Size : "<<size(top);
                break;
            case 5:
                cout << isEmpty(top);
                break;
            case 6:
                display(top);
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid Input";
        }
    }
return 0;
}