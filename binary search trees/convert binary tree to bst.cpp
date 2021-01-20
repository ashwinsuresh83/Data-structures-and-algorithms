void inOrder(Node* node,vector<int> &v){
    if(!node)
        return;
    inOrder(node->left,v);
    v.push_back(node->data);
    inOrder(node->right,v);
}
void bst(Node* node,vector<int> v,int &i){
    if(!node)
        return;
    bst(node->left,v,i);
    node->data=v[i++];
    bst(node->right,v,i);
}
Node *binaryTreeToBST (Node *root)
{
    //Your code goes here
    if(!root)
        return NULL;
    vector<int>v;
    inOrder(root,v);
    sort(v.begin(),v.end());
    int i=0;
    bst(root,v,i);
    return root;
}
