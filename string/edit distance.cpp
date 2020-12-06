		int editDistance(string s, string t)
		{
		    // Code here
		    int len1=s.size();
		    int len2=t.size();
		    int dp[len1+1][len2+1];
		    for(int i=0;i<=len1;i++){
		        for(int j=0;j<=len2;j++){
		            if(i==0){
		                dp[i][j]=j;
		            }
		            else if(j==0){
		                dp[i][j]=i;
		            }
		            else if(t[j-1]==s[i-1]){
		                dp[i][j]=dp[i-1][j-1];
		            }
		            else{
		                dp[i][j] =1 + min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]));
		            }
		        }
		    }
		    return dp[len1][len2];
		}
