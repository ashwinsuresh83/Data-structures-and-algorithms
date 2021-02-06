    int celebrity(vector<vector<int> >& M, int n) {
        // code here
        stack<int> st;
        for(int i=0;i<n;i++)
            st.push(i);
        while(st.size()>=2){
            int i=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            if(M[i][j]==1){
                st.push(j);
            }else{
                st.push(i);
            }
        }
        if(st.empty())
            return -1;
        int ans=st.top();
        for(int i=0;i<n;i++){
            if(i!=ans){
                if(M[i][ans]==0 || M[ans][i]==1)
                    return -1;
            }
        }
        return ans;
    }

