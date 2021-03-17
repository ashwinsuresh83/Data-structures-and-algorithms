    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=M[i][j];
            }
        }
        int sum=0;
        if(n==1){
            for(int i=0;i<m;i++)
                sum+=M[0][i];
            return sum;
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    dp[j][i]+=max(dp[j][i-1],dp[j+1][i-1]);
                }
                else if(j==n-1){
                    dp[j][i]+=max(dp[j][i-1],dp[j-1][i-1]);
                }
                else{
                    dp[j][i]+=max(dp[j][i-1],max(dp[j+1][i-1],dp[j-1][i-1]));
                }
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(dp[i][m-1]>res)
                res=dp[i][m-1];
        }
        return res;
    }
