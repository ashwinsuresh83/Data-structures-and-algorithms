    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int dp[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==0){
                    dp[i][j]=Matrix[i][j];
                }
                else if(j==0){
                    dp[i][j]=Matrix[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
                }
                else if(j==N-1){
                    dp[i][j]=Matrix[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
                }
                else{
                    dp[i][j]=Matrix[i][j]+max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]));
                }
            }
        }
        return *max_element(dp[N-1],dp[N-1]+N);
    }
