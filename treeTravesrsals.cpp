#include <iostream> 
using namespace std; 
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
void inOrder(node *root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" - ";
        inOrder(root->right);
    }
}
void preOrder(node *root){
    if(root!=NULL){
        cout<<root->data<<" - ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" - ";
    }
}
int main(){
    /*          10
                / \ 
               20  30
                   / \
                  40  50          */

    node *root=new node(10);                                      
    root->left=new node(20);                                         
    root->right=new node(30);                                        
    root->right->left=new node(40);                               
    root->right->right=new node(50);                              
    cout<<"\n In-Order : ";
    inOrder(root);
    cout<<"\n Pre-Order : ";
    preOrder(root);
    cout<<"\n Post-Order : ";
    postOrder(root);

return 0;
}


