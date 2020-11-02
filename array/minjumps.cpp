#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i]=10000;
        for(int j=0;j<i;j++){
            if(arr[j]+j>=i){
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }
    if(dp[n-1]==10000){
        cout<<-1<<"\n";
    }
    else{
        cout<<dp[n-1]<<"\n";
    }
	}
	return 0;
}
