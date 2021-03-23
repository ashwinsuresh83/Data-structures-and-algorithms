    int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n];
       for(int i=0;i<n;i++)
        dp[i]=1;
       for(int j=1;j<n;j++){
           for(int i=0;i<j;i++){
               if(a[j]>a[i]){
                   dp[j]=max(dp[j],dp[i]+1);
               }
           }
       }
       return *max_element(dp,dp+n);
    }
