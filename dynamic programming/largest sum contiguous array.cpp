 int maxSubarraySum(int arr[], int n){

        // Your code here
        int meh=0,msf=INT_MIN;
        for(int i=0;i<n;i++){
            meh+=arr[i];
            if(arr[i]>meh)
                meh=arr[i];
            if(meh>msf)
                msf=meh;
        }
        return msf;

    }
