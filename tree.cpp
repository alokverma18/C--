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
int main(){
    node *root = new node(2);
    root->left = new node(1);
    root->right = new node(3);
    root->right->right = new node(5);

    cout<<root->data<<endl<<root->left->data<<endl<<root->right->data<<endl<<root->right->right->data;
return 0;
}