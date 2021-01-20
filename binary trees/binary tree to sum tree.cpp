int assist(Node* node){
    if(!node)
        return 0;
    int data=node->data;
    node->data=assist(node->left)+assist(node->right);

    if(!node->left && !node->right)
        node->data=0;
    return data+node->data;
}
void toSumTree(Node *node)
{
    // Your code here
    if(!node)
        return;
    assist(node);
}

