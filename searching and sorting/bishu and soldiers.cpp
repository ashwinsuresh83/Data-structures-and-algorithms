#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    while(q--){
        int power;
        cin>>power;
        int sum=0,count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=power){
                count+=1;
                sum+=arr[i];
            }
        }
        cout<<count<<" "<<sum<<endl;

    }

}
