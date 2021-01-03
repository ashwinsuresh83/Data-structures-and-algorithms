int minSwaps(int arr[], int N){
    /*Your code here */
    int count=0;
    for(int i=0;i<N;i++){
        int minidx=i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        if(minidx!=i){
            int temp=arr[i];
            arr[i]=arr[minidx];
            arr[minidx]=arr[i];
            count+=1;
        }
    }
    return count;
}
