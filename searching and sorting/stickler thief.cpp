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
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int dp[n+1];
	    dp[0]=0;
	    dp[1]=arr[0];
	    for(int i=1;i<n;i++){
	        dp[i+1]=max(dp[i],dp[i-1]+arr[i]);
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
