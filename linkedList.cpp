#include <iostream> 
using namespace std; 
class Node{
    public:
        int data;
        Node *next;

        Node(int value){
            data=value;
            next=NULL;
        }
};
void insertAtFirst(Node **head, int value){
    Node *n=new Node(value);
    if(*head==NULL){
        *head=n;
    }
    else{
        n->next=*head;
        *head=n;
    }
}
void insertAfterValue(Node *head, int key, int value){
    Node *n=new Node(value);
    if(head==NULL){
        return;
    }
    Node *p=head;
    while(p->data!=key && p->next!=NULL){
        p=p->next;
    }
    if(p!=NULL){
        n->next=p->next;
        p->next=n;
    }
    else
        cout<<"Node with value "<<key<<" not found :(\n";
}

void insertAtLast(Node **head, int value){
    Node *n=new Node(value);
    if(*head==NULL){
        *head=n;
    }
    else{
        Node *temp=*head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }         
}
int search(Node *head, int key){
    int c=1;
    if(head==NULL){
        //cout<<"NOT FOUND\n";
        return -1;
    }
    Node *p=head;
    while(p->data!=key && p->next!=NULL){
        p=p->next;
        c++;
    }
    if(p->next || p->data==key)
        return c;
    return -1;
}
void display(Node *head){
        while(head!=NULL){
            cout<<head->data<<" -> ";
            head=head->next;
        }
    cout<<endl<<endl;
}
void deleteFirst(Node **head){
    if(*head==NULL || (*head)->next==NULL){
        *head=NULL;
        return;
    }
    Node *p=*head;
    *head=(*head)->next;
    free(p);
}
void deleteLast(Node **head){
    if(*head==NULL || (*head)->next==NULL){
        *head=NULL;
        return;
    }
    else{
        Node *temp=*head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}
void deleteValue(Node **head, int key){
    if(*head==NULL)
        return;
    if((*head)->data==key){
        Node *p=*head;
        *head=(*head)->next;
        free(p);
        return;
    }
    Node *p=*head;
    while(p->next->data!=key && p->next!=NULL){
        p=p->next;
    }
    if(p!=NULL){
        Node *t=p->next;
        p->next=p->next->next;
        free(t);
    }
}

int main(){
    
    Node *head = NULL;
    int x,value;
    cout<<"Insertion at Beginning\n";
    cout<<"Enter number of Elements : ";
    cin>>x;
    cout<<"Enter the values : ";
    while(x--){
        cin>>value;
        insertAtFirst(&head,value);
    }
    display(head);

    cout<<"Delete Last\n";
    deleteLast(&head);
    display(head);

    
    cout<<"Insertion at Last\n";

    cout<<"Enter a value : ";
    cin>>value;
    insertAtLast(&head,value);
    display(head);

    cout<<"Insertion after an Element\n";
    cout<<"Enter the Value : ";
    cin>>value;
    cout<<"Location : After ";
    cin>>x;
    insertAfterValue(head,x,value);
    display(head);

    

    cout<<"Delete First\n";
    deleteFirst(&head);
    display(head);

    cout<<"Delete a Value\n";
    cout<<"Enter value of Node to be deleted : ";
    cin>>value;
    deleteValue(&head,value);
    display(head);

    cout<<"Searching a Value\n";
    cout<<"Enter value of Node to be searched : ";
    cin>>value;
    cout<<"Position (Base 1) : "<<search(head,value);



return 0;
}