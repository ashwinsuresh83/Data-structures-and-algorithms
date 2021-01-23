void inOrder(Node* root,int &k,int&res){
    if(!root)
        return;
    inOrder(root->left,k,res);
    if(k==1){
        res=root->data;
        k--;
    }
    else
        k--;
        inOrder(root->right,k,res);
}
int KthSmallestElement(Node *root, int K)
{
    //add code here.
    int res=-1;
    inOrder(root,K,res);
    return res;
}
