#include<bits/stdc++.h>
using namespace std;
vector<string>res;
void permutation(string a,int s,int e){
    if(s==e){
        res.push_back(a);

    }
    else{
        for(int i=s;i<=e;i++){
            swap(a[s],a[i]);
            permutation(a,s+1,e);
            swap(a[s],a[i]);
        }
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    permutation(a,0,a.size()-1);
	    sort(res.begin(),res.end());
	    for(int i=0;i<res.size();i++){
	        cout<<res[i]<<" ";
	    }
	    res.clear();
	    cout<<endl;
	}
	return 0;
}
