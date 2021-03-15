long long int count( int S[], int m, int n )
    {

        //code here.
        long long int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<n+1;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(j-S[i-1]<0){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-S[i-1]];
                }
            }
        }
        return dp[m][n];
    }
