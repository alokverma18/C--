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
void insertAtFirst(node **head, int x){
    node *t=new node(x);
    if(*head==NULL){
        *head=t;
        t->next=*head;
    }
    else{
        node *cur=*head;
        while(cur->next!=*head)
            cur=cur->next;
        cur->next=t;
        t->next=*head;
        *head=t;
    }
}
void insertAtLast(node **head, int x){
    node *t=new node(x);
    if(*head==NULL){
        *head=t;
        t->next=*head;
    }
    else{
        node *cur=*head;
        while(cur->next!=*head)
            cur=cur->next;
        cur->next=t;
        t->next=*head;
    }
}
void deleteFirst(node **head){
    if(*head==NULL || (*head)->next==*head){
        *head=NULL;
        return;
    }
    else{
        node *t=*head,*cur=*head;
        while(cur->next!=*head)
            cur=cur->next;
        *head=(*head)->next;
        cur->next=*head;
        free(t);
    }
}
void deleteLast(node **head){
    if(*head==NULL || (*head)->next==*head){
        *head=NULL;
        return;
    }
    else{
        node *cur=*head;
        while(cur->next->next!=*head)
            cur=cur->next;
        free(cur->next);
        cur->next=*head;
    }
}
void display(node *head){
    node *t=head;
    while(t->next!=head){
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<t->data;
    cout<<endl;
}
int main(){
    node *head=NULL;
    insertAtFirst(&head,50);
    display(head);
    deleteFirst(&head);
    display(head);
    insertAtLast(&head,10);
    insertAtLast(&head,20);
    insertAtLast(&head,30);
    display(head);
    deleteLast(&head);
    display(head);
    
    
    
return 0;
}