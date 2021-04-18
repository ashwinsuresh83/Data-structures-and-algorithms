	long long getCount(int N)
	{
		// Your code goes here
		long long int dp[N+1][10];
		map<int,vector<int>> available;
		available[0]={0,8};
		available[1]={1,2,4};
		available[2]={1,2,3,5};
		available[3]={2,3,6};
		available[4]={4,1,5,7};
		available[5]={2,5,6,4,8};
		available[6]={6,3,9,5};
		available[7]={7,8,4};
		available[8]={0,8,9,5,7};
		available[9]={9,8,6};
		for(int i=1;i<=N;i++){
		    for(int j=0;j<10;j++){
		        if(i==1)
		            dp[i][j]=1;
		        else{
		            dp[i][j]=0;
		            for(int k:available[j]){
		                dp[i][j]+=dp[i-1][k];
		            }
		        }
		    }
		}
		long long int res=0;
		for(int i=0;i<10;i++)
		    res+=dp[N][i];
		return res;
	}
