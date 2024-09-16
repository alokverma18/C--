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
int maxi(node *root){
    if(root==NULL)
        return INT_MIN;
    else{
        return max(root->data,max(maxi(root->left),maxi(root->right)));
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

    cout<<maxi(root);
return 0;
}