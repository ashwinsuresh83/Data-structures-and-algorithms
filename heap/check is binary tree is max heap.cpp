bool isHeap(Node * tree)
{
 // Your code here
    if(!tree)
        return true;
    if(!tree->left && !tree->right)
        return true;
    int left=tree->left->data;
    int right=tree->right->data;
    if((tree->left && left>tree->data) || (tree->right && right>tree->data))
        return false;
    return isHeap(tree->left) && isHeap(tree->right);




}
