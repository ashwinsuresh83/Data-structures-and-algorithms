    int nCr(int n, int r){
        // code here
        if(r>n)
            return 0;
        if(r>n-r)
            r=n-r;
        int dp[r+1][n+1];
        dp[0][0]=0;
        for(int i=1;i<=r;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=n;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=(dp[i-1][j-1]+dp[i][j-1])%1000000007;
                }
            }
        }
        return dp[r][n];
    }
