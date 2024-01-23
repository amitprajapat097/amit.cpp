void preOrder(Node* &root)
{
    Node* temp=root;
    if(temp==NULL)
    return;
    cout<<node->data<<" ";
    preOrder(temp->left);
    preOrder(temp->right);
}