#include <iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[],int first,int last,int key){
    while(first<=last){
        int mid=first+(last-first)/2;
        if(arr[mid]==key){
            return 1;
        }
        if(key>arr[mid]){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    return 0;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k,flag=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        if(binarySearch(arr,i+1,n-1,k+arr[i])){
	            cout<<1<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<-1<<endl;
	}
	return 0;
}
