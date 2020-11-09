#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int count=99999;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++){
	        int sum=arr[i];
	        int currCount=1;
	        if(sum>x){
	            count=min(currCount,count);
	        }


	        for(int j=i+1;j<n;j++){
	            sum+=arr[j];
	            currCount++;
	            if(sum>x){
	                count=min(currCount,count);
	                break;
	            }
	        }
	    }
	    cout<<count<<endl;
	}

	return 0;
}
