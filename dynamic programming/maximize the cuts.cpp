int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    int dp[3][n+1];
    for(int i=0;i<3;i++){
        dp[i][0]=0;
    }
    int arr[3]={x,y,z};
    for(int i=1;i<=n;i++){
        if(i%arr[0]==0)
            dp[0][i]=i/arr[0];
        else
            dp[0][i]=0;
    }
    for(int i=1;i<3;i++){
        for(int j=1;j<=n;j++){
            if(j>=arr[i] &&((dp[i][j-arr[i]]>0 )|| j==arr[i] )){
                dp[i][j]=max(dp[i-1][j],1 + dp[i][j-arr[i]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    return dp[2][n];
}
