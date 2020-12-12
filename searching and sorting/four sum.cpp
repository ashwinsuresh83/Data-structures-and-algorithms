vector<vector<int> > fourSum(vector<int> &arr, int k) {
    // Your code goes here
    vector<vector<int>> res;
    int l,r,n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            l=j+1;
            r=n-1;
            while(l<r){
                vector<int> ans;
                if(arr[i]+arr[j]+arr[l]+arr[r]==k){
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[l]);
                    ans.push_back(arr[r]);
                    l++;
                    r--;
                    res.push_back(ans);
                }
                else if(arr[i]+arr[j]+arr[l]+arr[r]<k){
                    l++;
                }
                else
                    r--;
            }
        }
    }
    return res;
}
