vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) {
    //code here
    vector<pair<int,int>> res;
    sort(vec.begin(),vec.end());
    pair<int,int> temp=vec[0];
    for(auto i:vec){
        if(i.first<=temp.second){
            temp.second=max(i.second,temp.second);
        }
        else{
            res.push_back(temp);
            temp=i;
        }

    }
    res.push_back(temp);
    return res;
}
