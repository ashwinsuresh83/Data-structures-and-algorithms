int knapSack(int W, int wt[], int val[], int n)
{
   // Your code here
   int dp[n][W+1];
   for(int i=0;i<n;i++){
       dp[i][0]=0;
   }
    for(int i=0;i<n;i++){
        for(int j=1;j<=W;j++){
            if (wt[i]<=j){
                if(i>0){
                    if(j-wt[i]>=0){
                        dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
                    }
                    else{
                        dp[i][j]=max(val[i],dp[i-1][j]);
                    }
                }
                else{
                    dp[i][j]=val[i];
                }
            }
            else{
                if(i>0){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
    }
    return dp[n-1][W];
}
