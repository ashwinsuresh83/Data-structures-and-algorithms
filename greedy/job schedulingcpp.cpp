pair<int,int> JobScheduling(Job arr[], int n)
{
    // your code here
    multimap<int,int,greater<int>> jobs;
    int k=0,sum=0;
    for(int i=0;i<n;i++)
        jobs.insert({arr[i].profit,arr[i].dead});
    for(auto it:jobs){
        if(it.second>k){
            sum+=it.first;
            k++;
        }
    }
    return make_pair(k,sum);
}
