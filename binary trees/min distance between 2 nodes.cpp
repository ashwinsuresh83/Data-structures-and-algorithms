Node* lca(Node* root,int n1,int n2){
    Node* lnode,*rnode;
    if(!root)
        return NULL;
    if(root->data==n1||root->data==n2)
        return root;
    lnode=lca(root->left,n1,n2);
    rnode=lca(root->right,n1,n2);
    if(lnode&& rnode)
        return root;
    return(lnode?lnode:rnode);
}
int dist(Node* node,int val, int depth){
    if(!node)
        return -1;
    if(node->data==val)
        return depth;
    int l=dist(node->left,val,depth+1);
    int r=dist(node->right,val,depth+1);
    return max(l,r);
}
int findDist(Node* root, int a, int b) {
    // Your code here
    Node* Lca=lca(root,a,b);
    int ldist=dist(Lca,a,0);
    int rdist=dist(Lca,b,0);
    return ldist+rdist;
}
