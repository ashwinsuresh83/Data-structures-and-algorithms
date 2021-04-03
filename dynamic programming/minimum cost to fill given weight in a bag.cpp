	int minimumCost(int cost[], int N, int W)
	{
        // Your code goes here
        long long int dp[N+1][W+1];
        for(int i=0;i<=W;i++)
            dp[0][i]=INT_MAX;
        for(int i=0;i<=N;i++)
            dp[i][0]=0;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){

                if(i<=j && cost[i-1]!=-1){
                    dp[i][j]=min(cost[i-1]+dp[i][j-i],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[N][W]==INT_MAX)
            return -1;
        return dp[N][W];
	}
