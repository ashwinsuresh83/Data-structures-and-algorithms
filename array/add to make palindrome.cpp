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
	    int first=0,last=n-1,res=0;
	    while(last-first>0){
	        if(arr[first]==arr[last]){
	            first++;
	            last--;
	            continue;
	        }
	        if(arr[first]<arr[last]){
	            arr[first+1]+=arr[first];
	            first++;
	            res++;
	        }
	        else{
	            arr[last-1]+=arr[last];
	            last--;
	            res++;
	        }

	    }
	    cout<<res<<endl;

	}
	return 0;
}
