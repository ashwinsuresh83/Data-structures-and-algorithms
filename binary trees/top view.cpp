void topView(struct Node *root)
{
    //Your code here
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> cur=q.front();
        q.pop();
        if(m.find(cur.second)==m.end()){
            m[cur.second]=cur.first->data;
        }
        if(cur.first->left){
            q.push(make_pair(cur.first->left,cur.second-1));
        }
        if(cur.first->right){
            q.push(make_pair(cur.first->right,cur.second+1));
        }
    }
    auto i=m.begin();
    while(i!=m.end()){
        cout<<i->second<<" ";
        i++;
    }
}
