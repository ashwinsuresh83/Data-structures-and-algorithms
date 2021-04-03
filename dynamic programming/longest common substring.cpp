    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here

        int dp[n][m];
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 ||j==0){
                    if(S1[i]==S2[j]){
                        dp[i][j]=1;
                        res=max(res,dp[i][j]);
                    }
                    else
                        dp[i][j]=0;
                }
                else{
                    if(S1[i]==S2[j]){
                        dp[i][j]=1+dp[i-1][j-1];
                        res=max(res,dp[i][j]);
                    }
                    else
                        dp[i][j]=0;
                }
            }
        }
        return res;
    }
