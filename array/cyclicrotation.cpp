#include <iostream>
using namespace std;

int main() {
	//

	//code
	int t;
	cin>>t;
	while(t--){
	    int len;
	    cin>>len;
	    int arr[len];
	    for(int i=0;i<len;i++){
	        cin>>arr[i];
	    }
	    int res[len];
	    for(int i=0;i<len;i++){
	        res[(i+1)%len]=arr[i];
	    }
	   for(int i=0;i<len;i++)
	    cout<<res[i]<<" ";
	    cout<<"";
	}


	return 0;
}
