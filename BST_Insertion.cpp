#include<iostream>
using namespace std;

struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int item)
    {
        key=item;
        left=NULL;
        right=NULL;
    }
};

Node*insert(Node*node,int x)
{
    Node*temp=new Node(x);
    if(node==NULL)
    return temp;

    if(node->key==x)
    return node;

    if(node->key>x)
    node->left=insert(node->left,x);
    else
    node->right=insert(node->right,x);

    return node;

}

void inorder(Node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main()
{
    Node*root=new Node(50);
    root=insert(root,30);
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,70);
    root=insert(root,60);
    root=insert(root,80);
    inorder(root);

}