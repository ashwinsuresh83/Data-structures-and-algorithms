bool compare(struct val a,struct val b){
    return a.first<b.first;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,compare);
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[i].first>p[j].second){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    return *max_element(dp,dp+n);
}
