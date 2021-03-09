 void reverse(vector<int> adj[],int V,unordered_map<int,vector<int>> rev){
        for(int i=0;i<V;i++){
            for(int j:adj[i]){
                rev[j].push_back(i);
            }
        }
    }
    void dfs1(vector<bool> &visited,vector<int> adj[],int i,stack<int> &st){
        visited[i]=true;
        for(int j:adj[i]){
            if(!visited[j])
                dfs1(visited,adj,j,st);
        }
        st.push(i);
    }
    void dfs2(int curr,unordered_map<int,vector<int>> rev,vector<bool> &visited){
        visited[curr]=true;
        for(int j: rev[curr]){
            if(!visited[j])
                dfs2(j,rev,visited);
        }

    }
    int kosaraju(int V, vector<int> adj[]) {
        //code here
        vector<bool> visited(V,false);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!visited[i])
                dfs1(visited,adj,i,st);
        }
        unordered_map<int,vector<int>> rev;
        reverse(adj,V,rev);
        for(int i=0;i<V;i++)
            visited[i]=false;


        int count=0;
        while(!st.empty()){
            int curr=st.top();
            st.pop();
            if(!visited[curr]){
                count++;
                dfs2(curr,rev,visited);

            }

        }
        return count;
    }
