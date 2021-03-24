	int maxSubstring(string S)
	{
	    // Your code goes here
	    int dp[S.length()];
	    for(int i=0;i<S.length();i++){
	        if(S[i]=='1')
	            dp[i]=-1;
	        else
	            dp[i]=1;
	    }
	    int currSum=0;
	    int res=0;
	    for(int i=0;i<S.length();i++){
	        currSum+=dp[i];
	        if(currSum<0)
	            currSum=0;
	        else{
	            res=max(res,currSum);
	        }
	    }
	    if(res==0)
	        return -1;
	    return res;
	}
