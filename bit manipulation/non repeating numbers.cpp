    vector<int> singleNumber(vector<int> nums)
    {
        // Code here.
        vector<int> res;
        int xxory=0;
        for(int i=0;i<nums.size();i++)
            xxory=xxory ^ nums[i];
        int rsbm= xxory & -xxory;
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i] & rsbm)==0){
                x=x^nums[i];
            }
            else
                y=y^nums[i];
        }
        if(x<y){
            res.push_back(x);
            res.push_back(y);
        }
        else{
            res.push_back(y);
            res.push_back(x);
        }
        return res;

    }
