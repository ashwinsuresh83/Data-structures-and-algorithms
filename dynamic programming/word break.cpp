int wordBreak(string A, vector<string> &B) {
    //code here
    vector<int> dp(A.length()+1,false);
    dp[0]=true;
    for(int i=1;i<=A.length();i++){
        for(auto x:B){
            int len=x.length();
            if(dp[i-1] && A.substr(i-1,len)==x)
                dp[i+len-1]=true;
        }
    }
    return dp[A.length()];

}
