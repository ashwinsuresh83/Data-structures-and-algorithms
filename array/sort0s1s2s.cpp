#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int a[n];
	    int res[n],k=0;
	    for(int j=0;j<n;j++)
	        cin>>a[j];
	    for(int j=0;j<n;j++){
	        if(a[j]==0){
	            res[k]=a[j];
	            k++;
	            }
	    }
	    	    for(int j=0;j<n;j++){
	        if(a[j]==1){
	            res[k]=a[j];
	            k++;
	            }
	    }
	    	    for(int j=0;j<n;j++){
	        if(a[j]==2){
	            res[k]=a[j];
	            k++;
	            }
	    }
	    for(int j=0;j<n;j++){
	        cout<<res[j]<<" ";
	    }
	    cout<<"\n";
	    
	}
	
	return 0;
}