vector<int> leftView(Node *root)
{
   // Your code here
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

           if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
       }
   }
   return res;
}
