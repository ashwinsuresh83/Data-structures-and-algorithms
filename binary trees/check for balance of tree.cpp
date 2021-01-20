int solve(Node* root,bool &res){
    if(!root || !res)
        return 0;
    int lh=solve(root->left,res);
    int rh=solve(root->right,res);
    res=res && abs(lh-rh)<=1;
    return 1+max(lh,rh);
}
bool isBalanced(Node *root)
{
    //  Your Code here
    bool res=true;
    solve(root,res);
    return res;

}
