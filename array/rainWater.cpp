#include <iostream>
#include<algorithm>
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
	    int waterAmount=0;
	    for(int i=1;i<n-1;i++){
	        int lmax=*max_element(arr,arr+i);
	        int rmax=*max_element(arr+i,arr+n);
	        int minBound=min(lmax,rmax);
	        if(minBound-arr[i]>0)
	            waterAmount+=minBound-arr[i];
	    }
	    cout<<waterAmount<<"\n";
	}
	return 0;
}
