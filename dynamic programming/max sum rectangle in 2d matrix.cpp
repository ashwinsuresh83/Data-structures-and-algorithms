    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int dp[R];

        int res=INT_MIN;
        for(int i=0;i<C;i++){
            int values[R]={0};
            for(int r=i;r<C;r++){
                for(int j=0;j<R;j++){
                values[j]+=M[j][r];
            }
            dp[0]=values[0];
            int max_so_far=dp[0];
            for(int k=1;k<R;k++){
                dp[k]=max(dp[k-1]+values[k],values[k]);
                max_so_far=max(dp[k],max_so_far);
            }
            if(max_so_far>res)
                res=max_so_far;
            }

        }
        return res;
    }
