    int countFriendsPairings(int n)
    {
        // code here
        if(n<=2)
            return n;
        long long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(long long int i=3;i<=n;i++){
            dp[i]=(dp[i-1]+(i-1)*dp[i-2])%mod;
        }
        return dp[n];
    }
