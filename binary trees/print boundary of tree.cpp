void printLeft(Node* root,vector<int>&res){
    if(!root)
        return;
    if(root->left || root->right){
        res.push_back(root->data);

    }
    if(root->left)
        printLeft(root->left,res);
    else if(root->right)
        printLeft(root->right,res);

}
void inOrder(Node* root,vector<int> &res){
    if(!root)
        return;
    inOrder(root->left,res);
    if(!root->left && !root->right)
        res.push_back(root->data);
    inOrder(root->right,res);

}
void printRight(Node* root, vector<int> &v){
    if(!root)
        return;
    if(root->left || root->right){
        v.push_back(root->data);
    }
    if(root->right)
        printRight(root->right,v);
    else if(root->left)
        printRight(root->left,v);
}


vector <int> printBoundary(Node *root)
{
     //Your code here
     vector<int> res;
     if(root)
        res.push_back(root->data);
    printLeft(root->left,res);
    inOrder(root,res);
    vector<int> right;
    printRight(root->right,right);
    for(int i=right.size()-1;i>=0;i--){
        res.push_back(right[i]);
    }
    return res;
}
