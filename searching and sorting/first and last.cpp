#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    int firsti=-1,lasti=-1;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++){
	        if(arr[i]==x){
	            firsti=i;
	            break;
	        }
	    }
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]==x){
	            lasti=i;
	            break;
	        }
	    }
	    if(firsti==-1)
	        cout<<-1<<endl;
	    else{
	        cout<<firsti<<" "<<lasti<<endl;
	    }
	}
	return 0;
}
