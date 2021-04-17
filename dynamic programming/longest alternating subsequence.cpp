		int AlternatingaMaxLength(vector<int>&nums){
		    // Code here
		    int res=0;
		    int n=nums.size();
		    if(n==1)
		        return 1;
		    int dp[n][2];
		    for(int i=0;i<n;i++)
		        dp[i][0]=dp[i][1]=1;

		    for(int i=1;i<n;i++){
		        for(int j=0;j<i;j++){
		            if(nums[i]>nums[j] && dp[i][0]<dp[j][1]+1)
		                dp[i][0]=dp[j][1]+1;
		            else if(nums[i]<nums[j] && dp[i][1]<dp[j][0]+1)
		                dp[i][1]=dp[j][0]+1;
		        }
		        res=max(res,max(dp[i][0],dp[i][1]));
		    }
		    return res;


		}
