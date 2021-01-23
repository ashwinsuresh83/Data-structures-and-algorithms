void inOrder(Node* node,int l, int h ,int & count ){
    if(!node)
        return;
    inOrder(node->left,l,h,count);
    if(node->data>=l && node->data<=h)
        count++;
    inOrder(node->right,l,h,count);
}
int getCount(Node *root, int l, int h)
{
  // your code goes here
  int count=0;
  inOrder(root,l,h,count);
  return count;

}
