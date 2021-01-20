int maxh(Node* node){
    if(!node)
        return 0;
    return max(maxh(node->left),maxh(node->right))+1;
}
int minh(Node* node){
    if(!node)
        return INT_MAX;
    if(!node->left && !node->right)
        return 1;
    return min(minh(node->left),minh(node->right))+1;
}
bool check(Node *root)
{
    //Your code here
    return minh(root)==maxh(root);

}
