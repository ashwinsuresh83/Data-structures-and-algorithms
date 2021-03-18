    #define mod 1000000007
    long long countWays(int n, int k){
        // code here
        long long int dp[3][n+1];
        if(n==1)
            return k;
        for(int i =0;i<3;i++){
            dp[i][0]=0;
            dp[i][1]=0;
        }
        dp[0][2]=k;
        dp[1][2]=k*(k-1);
        dp[2][2]=dp[0][2]+dp[1][2];
        for(int i=3;i<=n;i++){
            dp[0][i]=dp[1][i-1]%mod;
            dp[1][i]=(dp[2][i-1]*(k-1))%mod;
            dp[2][i]=(dp[0][i]+dp[1][i])%mod;
        }
        return dp[2][n];
    }
