#include <iostream>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int flag=0;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++){
	        int currSum=arr[i];
	        if(arr[i]==0){
	            flag=1;
	            break;
	        }
	        for(int j=i+1;j<n;j++){
	            currSum+=arr[j];
	            if(currSum==0){
	                flag=1;
	                break;
	            }
	        }
	        if(flag==1)
	            break;

	    }
	    if(flag==0)
	        cout<<"No"<<"\n";
	    else
	        cout<<"Yes"<<"\n";
	}

	return 0;
}
