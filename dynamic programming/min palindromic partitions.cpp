    int palindromicPartition(string str)
    {
        // code here
        int n=str.size();
        bool dp[n][n];
        for(int cl=0;cl<n;cl++){
            for(int i=0,j=cl;j<n;i++,j++){
                if(cl==0)
                    dp[i][j]=true;
                else if(cl==1){
                    if(str[i]==str[j])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }
                else{
                    if(str[i]==str[j]){
                        if(dp[i+1][j-1])
                            dp[i][j]=true;
                        else
                            dp[i][j]=false;
                    }
                    else
                        dp[i][j]=false;
                }

            }
        }
        int res[n];
        res[0]=0;
        for(int i=1;i<n;i++){
            if(dp[0][i])
                res[i]=0;
            else{
                int minval=INT_MAX;
            for(int j=i;j>0;j--){
                if(dp[j][i]){
                    if(res[j-1]<minval)
                        minval=res[j-1];
                }

            }
            res[i]=minval+1;
            }
        }
        return res[n-1];

    }
