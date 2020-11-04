#include <iostream>

#include <bits/stdc++.h>
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
	    sort(arr,arr+n);
	    int maxSeq=1;
	    int seq=1;
	    for(int i=1;i<n;i++){
	        if(arr[i]!=arr[i-1] && arr[i]!=arr[i-1]+1){
	            seq=1;

	            continue;
	        }
	        if(arr[i]==arr[i-1]+1){
	            seq+=1;
	            if(seq>maxSeq)
	                maxSeq=seq;
	        }
	    }
	    cout<<maxSeq<<"\n";
	}
	return 0;
}
