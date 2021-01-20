void bDLL(Node* root,Node* &head,Node* &prev){
    if(!root)
        return;
    bDLL(root->left,head,prev);
    if(!prev){
        prev=root;
        head=root;
    }
    else{
        root->left=prev;
        prev->right=root;
        prev=root;
    }
    bDLL(root->right,head,prev);
}


Node * bToDLL(Node *root)
{
    // your code here
    Node* head=NULL,*prev=NULL;
    bDLL(root,head,prev);
    return head;
}
