void traverse(Node* node,int l,int r,bool &res){
    if(!node ||! res)
        return;
    if(node->data<l || node->data>r)
        res=false;
    traverse(node->left,l,node->data-1,res);
    traverse(node->right,node->data+1,r,res);
}
// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    // Your code here
    bool res=true;
    traverse(root,INT_MIN,INT_MAX,res);
    return res;
}
