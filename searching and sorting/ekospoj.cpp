#include <iostream>
#include<algorithm>
using namespace std;
bool isValid(int arr[],int n,int m,int mid){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>mid){
			sum+=(arr[i]-mid);
		}

	}
	if(sum>=m){
		return true;
	}
	return false;
}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int start=0;
	int endi=*max_element(arr,arr+n);
	int res=-1;
	while(start<=endi){
		int mid=start+ (endi-start)/2;
		if(isValid(arr,n,m,mid)){
			res=mid;
			start=mid+1;
		}
		else{
			endi=mid-1;
		}
	}
	cout<<res;
	return 0;
}
