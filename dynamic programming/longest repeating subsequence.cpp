		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int dp[str.length()+1][str.length()+1];
		    int len=str.length();
		    for(int i=0;i<=len;i++){
		        for(int j=0;j<=len;j++){
		            if(i==0||j==0)
		                dp[i][j]=0;
		            else{
		                if(str[i-1]==str[j-1] && i!=j){
		                    dp[i][j]=1+dp[i-1][j-1];
		                }
		                else{
		                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		                }
		            }
		        }
		    }

		    return dp[len][len];
		}
