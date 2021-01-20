void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
if(!root)
    return;
findPreSuc(root->left,pre,suc,key);
if(key>root->key)
    pre=root;
if(key<root->key&& suc==0)
    suc=root;
findPreSuc(root->right,pre,suc,key);


}
