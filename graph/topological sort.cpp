void topSortUtil(stack<int> &st,vector<bool> &visited,vector<int> adj[],int V,int i){
	    visited[i]=true;
	    for(int j=0;j<adj[i].size();j++){
	        if(!visited[adj[i][j]])
	            topSortUtil(st,visited,adj,V,adj[i][j]);
	    }
	    st.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    stack<int> st;
	    vector<bool> visited(V,false);
	    for(int i=0;i<V;i++){
	        if(!visited[i])
	            topSortUtil(st,visited,adj,V,i);
	    }

	    vector<int> res;
	    while(!st.empty()){
	        res.push_back(st.top());

	        st.pop();
	    }

	    return res;
	}
