vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> arr;
    stack<int> st;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        st.push(curr->data);
        q.pop();
        if(curr->right){
            q.push(curr->right);
        }
        if(curr->left){
            q.push(curr->left);
        }
    }
    while(!st.empty()){
        arr.push_back(st.top());
        st.pop();
    }
    return arr;
}
