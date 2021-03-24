int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
{
    // Your code goes here
    sort(arr,arr+N,greater<int>());
    int i=0;
    int res=0;
    while(i<N-1){
        if(arr[i]-arr[i+1]<K){
            res+=arr[i]+arr[i+1];
            i+=2;
        }
        else
            i++;
    }
    return res;

}
