#include <iostream>
using namespace std;
int helper(int A[],int B[],int n,int m,int k)
{
    if(n==0)return B[k];

    if(m==0)return A[k];

    int mid1=n/2;
    int mid2=m/2;

    if(mid1+mid2<k)
    {
        if(A[mid1]<B[mid2])
        return helper(A+mid1+1,B,n-mid1-1,m,k-mid1-1);
        else
        return helper(A,B+mid2+1,n,m-mid2-1,k-mid2-1);
    }
    else
    {
        if(A[mid1]<B[mid2])
        {
            return helper(A,B,n,mid2,k);
        }
        else
        return helper(A,B,mid1,m,k);
    }

}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int arr1[n],arr2[m];
	    for(int i=0;i<n;i++)
	        cin>>arr1[i];
	    for(int i=0;i<m;i++)
	        cin>>arr2[i];
	    cout<<helper(arr1,arr2,n,m,k-1)<<endl;
	}


	return 0;
}
