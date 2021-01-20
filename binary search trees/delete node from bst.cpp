class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return nullptr;
        if(key>root->val)
            root->right=deleteNode(root->right,key);
        else if(key<root->val)
            root->left=deleteNode(root->left,key);
        else{
            if(root->left==NULL && root->right==NULL){
                delete root;
            }
            else if(root->left==NULL){
                TreeNode* temp=root;
                root=root->right;
                delete temp;
            }
            else if(root->right==NULL){
                TreeNode* temp=root;
                root=root->left;
                delete temp;
            }
            else{
                TreeNode* temp=root->right;
                while(temp->left)
                    temp=temp->left;
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }
        }
        return root;
    }
};
