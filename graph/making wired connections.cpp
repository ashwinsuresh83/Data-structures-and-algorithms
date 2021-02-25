void dfs(vector<vector<int>> &adj,vector<bool> &visited,int node){
        for(int i : adj[node]){
            if(!visited[i]){
                visited[i]=true;
                dfs(adj,visited,i);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        vector<vector<int>> adj(n);
        vector<bool> visited(n,false);
        for(auto v:connections){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i]=true;
                dfs(adj,visited,i);
                res++;
            }
        }
        return res-1;
    }
