#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> & res,int i,int size){
    int l=2*i+1;
    int r=2*i+2;
    int greatest=i;
    if(l<size && res[l]>res[greatest]){
        greatest=l;
    }
    if(r<size && res[r]>res[greatest])
        greatest=r;
    if(greatest!=i){
        swap(res[i],res[greatest]);
        heapify(res,greatest,size);
    }
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> res;
	    for(int i=0;i<n+m;i++){
	        int a;
	        cin>>a;
	        res.push_back(a);
	    }
	    for(int i=res.size()/2-1;i>=0;i--){
	        heapify(res,i,n+m);
	    }
	    for(int i=0;i<n+m;i++)
	    cout<<res[i]<<" ";

	}

	return 0;
}
