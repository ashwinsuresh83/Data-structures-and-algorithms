class Solution{
    public:
    struct compare{
        bool operator()(pair<int,int> a,pair<int,int> b){
            return a.first>=b.first;
        }
    };

    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
    //code here
    int now[k]={0};
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
    for(int i=0;i<k;i++)
        pq.push({arr[i][0],i});
    int x,row;
    vector<int> res;
    for(int i=0;i<k*k;i++){
        x=pq.top().first;
        row=pq.top().second;
        pq.pop();

        res.push_back(x);
        if(now[row]<k-1){
            ++now[row];
            pq.push({arr[row][now[row]],row});
        }

    }



    return res;
    }
};
