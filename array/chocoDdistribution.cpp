#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nooftestcases;
    cin>>nooftestcases;

    while(nooftestcases--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int ans = INT_MAX,s;
        cin>>s;
        sort(a,a+n);

        int add = s-1;
        for(int i=0;i<=(n-s);i++){
            int temp = a[i+add] - a[i];
            if(temp<ans) ans = temp;
        }
        cout<<ans<<endl;
    }
}
