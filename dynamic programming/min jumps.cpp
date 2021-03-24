    int minJumps(int arr[], int n){
        // Your code here
        if(arr[0]==0||n<1)
            return -1;
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)
            dp[i]=INT_MAX;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]+j>=i){
                    dp[i]=min(dp[i],dp[j]+1);
                }
            }
        }
        if(dp[n-1]==INT_MAX||dp[n-1]<0)
            return -1;
        return dp[n-1];
    }
