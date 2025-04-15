#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

struct node{
    int data;
    node *left, *right;
};

node *create(){
    //get the data as x
    int x;
    node *newnode = new node;//allocation of new memory each time
    cout<<"enter the data"<<endl;
    cin>>x;
    if(x==-1){
        return 0;
    }
    newnode->data=x;

    //get children of x
    cout<<"left child of "<<x<<": "<<endl;
    newnode->left=create();
    cout<<"Right child of "<<x<<": "<<endl;
    newnode->right=create();

    //returns the required address
    return newnode;
}

void preorder (node *root){
    if(root==NULL) return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder (node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder (node *root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

int main(){
    node *root = NULL;
    root = create();
    cout<<"PRE ORDER: "<<endl;
    preorder(root);
    cout<<"IN ORDER: "<<endl;
    inorder(root);
    cout<<"POST ORDER: "<<endl;
    postorder(root);
}