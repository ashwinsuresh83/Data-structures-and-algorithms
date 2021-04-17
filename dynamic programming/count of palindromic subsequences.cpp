    #define mod 1000000007
    long long int  countPS(string str)
    {
       //Your code here
       long long int n=str.length();
       long long int dp[n][n];
       for(long long int cl=0;cl<n;cl++){
           for(long long int i=0,j=cl;j<n;i++,j++){
               if(cl==0)
                dp[i][j]=1;
               else if(cl==1){
                   if(str[i]==str[j])
                    dp[i][j]=3;
                   else
                    dp[i][j]=2;
               }
               else{
                   if(str[i]==str[j]){
                       dp[i][j]=(1+dp[i+1][j]+dp[i][j-1])%mod;
                   }
                   else{
                        dp[i][j]=((dp[i+1][j]+dp[i][j-1])%mod-(dp[i+1][j-1])%mod+mod)%mod;
                   }
               }
           }
       }
       return dp[0][n-1];
    }
