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
	    for(int i=n-2;i>=0;i--){
	        if(arr[i]<arr[i+1]){
	            int j=i+1;
	            while(arr[j]>arr[i] &&j<n){
	                j++;
	            }
	            int temp=arr[j-1];
	            arr[j-1]=arr[i];
	            arr[i]=temp;
	            j=i+1;
	            while(j<(n+i)/2){
	                temp=arr[j];
	                arr[j]=arr[n-(j-i)];
	                arr[n-(j-i)]=temp;
	                j++;
	            }
	            break;
	        }
	    }
	    for(int j=0;j<n;j++)
	        cout<<arr[j]<<" ";
	}
	return 0;
}
