    int matrixMultiplication(int N, int arr[])
    {
        // code here
        int dp[N+1][N+1];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j)
                    dp[i][j]=0;
            }
        }
        for(int cl=2;cl<=N-1;cl++){
            for(int l=1;l<=N-cl;l++){
                int r=l+cl-1;
                dp[l][r]=INT_MAX;
                for(int k=l;k<r;k++){
                    dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+arr[l-1]*arr[k]*arr[r]);
                }
            }
        }
        return dp[1][N-1];
    }
