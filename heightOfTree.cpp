#include <iostream> 
using namespace std; 
struct node{
    int data;
    node *left;
    node *right;
 
    node(int x){
        data=x;
    }
};
int max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int height(node *root){
    if(root==NULL)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));
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

    cout<<height(root);
return 0;
}