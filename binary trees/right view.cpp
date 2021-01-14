vector<int> rightView(Node *root)
{
   // Your Code here
   vector<int> res;
   queue<Node*> q;
   if(root)
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        int size=q.size();
        res.push_back(curr->data);
        for(int i=0;i<size;i++){
            curr=q.front();
            q.pop();
            if(curr->right)
                q.push(curr->right);
            if(curr->left)
                q.push(curr->left);
        }
    }
    return res;
}

