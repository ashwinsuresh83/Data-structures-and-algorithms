#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res[n];
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            res[k]=arr[i];
            k++;
        }
    }
    int i=0;
    while(arr[i]!=NULL){
        if(arr[i]>0){
            res[k]=arr[i];
            k++;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}
