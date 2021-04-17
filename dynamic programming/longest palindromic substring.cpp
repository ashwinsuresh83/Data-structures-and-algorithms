class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=0;
        if(s.size()==0)
            return 0;
        int n=s.size();
        int dp[n][n];
        string res;
        res=s[0];
        for(int cl=0;cl<n;cl++){
            for(int i=0,j=cl;j<n;i++,j++){
                if(cl==0){
                    dp[i][j]=1;

                }
                else if(cl==1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                        maxlen=cl+1;
                        res=s.substr(i,cl+1);
                        }
                    else
                        dp[i][j]=0;
                }
                else{
                    if(s[i]==s[j]&&dp[i+1][j-1]){
                        if(cl+1>maxlen){
                            maxlen=cl+1;
                            res=s.substr(i,cl+1);
                        }
                        dp[i][j]=1;
                    }
                    else
                        dp[i][j]=0;
                }
            }
        }
        return res;
    }
};
