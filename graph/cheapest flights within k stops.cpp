 int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto f:flights){
            adj[f[0]].push_back({f[1],f[2]});
        }
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;
        q.push({0,src,K+1});
        while(!q.empty()){
            vector<int> top=q.top();
            q.pop();
            int dist=top[0];
            int u=top[1];
            int e=top[2];
            if(dst==u)
                return dist;
            if(e>0){
                for(auto v:adj[u]){
                    q.push({dist+v.second,v.first,e-1});
                }
            }
        }
        return -1;
    }
