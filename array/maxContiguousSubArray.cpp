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
	    int maxSoFar=arr[0];
	    int maxEndingHere=arr[0];
	    for(int i=1;i<n;i++){
	        maxEndingHere=max(maxEndingHere+arr[i],arr[i]);
	        maxSoFar=max(maxSoFar,maxEndingHere);
	    }
	    cout<<maxSoFar<<"\n";
	}


	return 0;
}
