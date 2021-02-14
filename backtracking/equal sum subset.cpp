    int canPartition(int arr[],int start,int requiredSum,int currSum,bool used[],int n){
        if(currSum==requiredSum){
            return 1;
        }
        if(currSum>requiredSum)
            return 0;
        for(int i=start;i<n;i++){
            if(!used[i]){
                used[i]=true;
                if(canPartition(arr,start+1,requiredSum,currSum+arr[i],used,n))
                    return 1;

            }
            used[i]=false;

        }
        return 0;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        if(sum%2!=0)
            return 0;
        sum=sum/2;
        bool used[N]={false};
        return canPartition(arr,0,sum,0,used,N);
    }
