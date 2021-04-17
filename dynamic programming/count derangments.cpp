    long int disarrange(int N){
        // code here
        long int dp[N+1];
        dp[0]=0;
        dp[1]=0;
        dp[2]=1;
        if(N==1)
            return 0;
        if (N==2)
            return 1;

        for(long int i=3;i<=N;i++){
            dp[i]=((i-1)*(dp[i-1]+dp[i-2]))%mod;
        }
        return dp[N];
    }
