string preorder(Node* root,unordered_map<string,int> &subtrees){
    string s;
    if(!root){
        s+='$';
        return s;
    }
    s+=root->data;
    s+=preorder(root->left,subtrees);
    s+=preorder(root->right,subtrees);
    subtrees[s]++;
    return s;

}
bool dupSub(Node *root)
{
     //your code
     unordered_map<string,int> subtrees;
     preorder(root,subtrees);
     for(auto i:subtrees){
         if(i.second>=2 && i.first.length()>3)
            return true;
     }
     return false;


}
