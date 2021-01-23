void reverseInOrder(Node* node,int &k,int &res){
    if(!node)
        return;
    reverseInOrder(node->right,k,res);
    if(k==1){
        res=node->data;
        k--;
    }
    else
        k--;
    reverseInOrder(node->left,k,res);



}
// return the Kth largest element in the given BST rooted at 'root'
int kthLargest(Node *root, int K)
{
    //Your code here
    if(!root)
        return NULL;
    int res;
    reverseInOrder(root,K,res);
    return res;

}
