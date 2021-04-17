//Function to find the maximum possible amount of money we can win.
long long maximumAmount(int arr[], int n)
{
    // Your code here
    long long dp[n][n];
    for(int cl=0;cl<n;cl++){
        for(int i=0,j=cl;j<n;i++,j++){
            if(cl==0)
                dp[i][j]=arr[i];
            else if(cl==1){
                dp[i][j]=max(arr[i],arr[j]);
            }
            else{
                int val1=arr[i]+min(dp[i+2][j],dp[i+1][j-1]);
                int val2=arr[j]+min(dp[i+1][j-1],dp[i][j-2]);
                dp[i][j]=max(val1,val2);
            }
        }
    }
    return dp[0][n-1];
}
