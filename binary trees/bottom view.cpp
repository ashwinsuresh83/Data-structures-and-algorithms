vector <int> bottomView(Node *root)
{
   // Your Code Here
   vector<int> res;
   map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> cur=q.front();
        q.pop();
            m[cur.second]=cur.first->data;

        if(cur.first->left){
            q.push(make_pair(cur.first->left,cur.second-1));
        }
        if(cur.first->right){
            q.push(make_pair(cur.first->right,cur.second+1));
        }
    }
    auto i=m.begin();
    while(i!=m.end()){
        res.push_back(i->second);
        i++;
    }
    return res;
}
