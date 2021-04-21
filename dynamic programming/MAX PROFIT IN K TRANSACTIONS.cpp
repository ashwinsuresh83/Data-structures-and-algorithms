    int maxProfit(int K, int N, int A[]) {
        // code here
        int dp[K+1][N];
        for(int i=0;i<=K;i++){
            int max_so_far=INT_MIN;
            for(int j=0;j<N;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
                else{

                    if(dp[i-1][j-1]-A[j-1]>max_so_far)
                        max_so_far=dp[i-1][j-1]-A[j-1];
                    dp[i][j]=max(dp[i][j-1],max_so_far+A[j]);
                }
            }
        }
        return dp[K][N-1];
    }
