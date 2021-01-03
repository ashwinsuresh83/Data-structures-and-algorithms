vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

    //code here
    int count=0;
    long long int sum=1;
    vector<long long int>res;
    for(int i=0;i<n;i++){
        if(nums[i]!=0)
            sum*=nums[i];
        else count++;
    }
    if(count>1){
        for(int i=0;i<n;i++)
            res.push_back(0);
    }
    else if(count=1){
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                res.push_back(0);
            }
            else{
                res.push_back(sum);
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            res.push_back(sum/nums[i]);
        }
    }
    return res;
}
