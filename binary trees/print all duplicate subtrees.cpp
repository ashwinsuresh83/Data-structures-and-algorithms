string inOrder(Node* node, unordered_map<string,int> & mp,stack<int> &st,int &flag){
    if(!node)
        return "";
    string str;
    str+="(";
    str+=inOrder(node->left,mp,st,flag);
    str+=node->data;
    str+=inOrder(node->right,mp,st,flag);
    str+=")";
    if(mp[str]==1){
        flag=1;
        st.push(node->data);
    }
    mp[str]++;
    return str;
}
void printAllDups(Node* root)
{
    // Code here
    int flag=0;
    unordered_map<string,int> mp;
    stack<int> st;
    inOrder(root,mp,st,flag);
    if(flag)
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    else
        cout<<-1;
}
