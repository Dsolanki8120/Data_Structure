

// To search a element in BST tree
bool search(Node* root, int x) {
   
    if(root==NULL)
    return false;
    
    if(root->data==x)
    return true;
    if(root->data>x)
    search(root->left,x);
    else
    search(root->right,x);
    
}

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

// This is insert a new element in tree
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


int main()
{
  Node*root=new Node(2);
    root=insert(root,81);
    root=insert(root,42);
    root=insert(root,87);
    root=insert(root,66);
    root=insert(root,45);
    root=insert(root,90);
    return search(root,87);
}
