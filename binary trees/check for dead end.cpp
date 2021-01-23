bool check(Node* node,int l,int h){
    if(!node)
        return false;
    if(node->data==l+1 && node->data==h-1 && !node->left && !node->right)
        return true;
    return (check(node->left,l,node->data)||check(node->right,node->data,h));


}

bool isDeadEnd(Node *root)
{
    //Your code her
    return check(root,0,INT_MAX);

}
