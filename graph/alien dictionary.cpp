    void dfs(vector<int> adj[],vector<bool> &visited, int i,stack<int>&st){
        visited[i]=true;
        for(auto j:adj[i]){
            if(!visited[j]){
                dfs(adj,visited,j,st);
            }
        }
        st.push(i);
    }
    string topoSort(vector<int> adj[],int k){
        stack<int>st;
        vector<bool>visited(k,false);
        for(int i=0;i<k;i++){
            if(!visited[i])
                dfs(adj,visited,i,st);
        }
        string res;
        while(!st.empty()){
            res+=st.top()+'a';
            st.pop();
        }
        return res;
    }

    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        for(int i=0;i<N-1;i++){
            string word1=dict[i];
            string word2=dict[i+1];
            for(int j=0;j<min(word1.size(),word2.size());j++){
                if(word1[j]!=word2[j]){
                    int char1=word1[j]-'a';
                    int char2=word2[j]-'a';
                    adj[char1].push_back(char2);
                    break;
                }
            }

        }
        string res=topoSort(adj,K);
        return res;
    }
