#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,m,c=0; cin>>n>>m; int a[n+m],h[100001]={0};
        for(int i=0;i<n+m;i++) cin>>a[i];
        for(int i=0;i<n+m;i++) {h[a[i]]++;}
        for(int i=0;i<100001;i++)
        {
            if(h[i]>0) c++;
        }
        cout<<c<<endl;
    }
	return 0;
}
