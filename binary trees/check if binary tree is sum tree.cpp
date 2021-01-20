int sum(Node* node){
    if(node)
        return node->data + sum(node->left) + sum(node->right);
    return 0;
}

bool isSumTree(Node* root)
{
     // Your code here
     if(!root)
        return true;
     if(root->left==NULL && root->right==NULL)
        return true;
     int lsum=sum(root->left);
     int rsum=sum(root->right);
     int total=lsum+rsum;
     if(total==root->data){
         if(isSumTree(root->left) && isSumTree(root->right))
            return true;
     }
     return false;

}
