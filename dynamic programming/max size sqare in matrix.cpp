    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        if(n==1 ||m==1)
            return 1;
        int dp[n][m];
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0)
                    dp[i][j]=mat[i][j];
                else if(mat[i][j]==1){
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                    res=max(res,dp[i][j]);
                }

                else if(mat[i][j]==0)
                    dp[i][j]=0;

            }
        }
        return res;
    }
