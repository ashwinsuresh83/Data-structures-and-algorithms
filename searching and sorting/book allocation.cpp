bool isValid(int arr[],int n,int m,int mx){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>mx){
            student++;
            sum=arr[i];
        }
    }
    if(student<=m)
        return true;
    return false;
}
int findPages(int *arr, int n, int m) {
    //code here
    if(m>n)
        return -1;
    sort(arr,arr+n);
    int start=arr[n],end=0;
    for(int i=0;i<n;i++)
        end+=arr[i];
    int res=-1;
    while(start<=end){
        int mid=start +(end-start)/2;
        if(isValid(arr,n,m,mid)){
            res=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return res;


}
