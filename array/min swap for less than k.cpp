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
	    int k;
	    cin>>k;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=k)
	            count++;
	    }
	    int swapCount=0;
	    for(int i=0;i<count;i++){
	        if(arr[i]>k)
	            swapCount++;

	    }
	    int res=swapCount;
	    for(int i=0,y=count;y<n;y++,i++){
	        if(arr[i]>k)
	            swapCount--;
	        if(arr[y]>k)
	            swapCount++;
	        res=min(res,swapCount);

	    }
	    cout<<res<<endl;
	}
	return 0;
}
