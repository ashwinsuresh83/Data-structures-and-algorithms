        long long minCost(long long arr[], long long n) {
        // Your code here
        long long res=0;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(int i=0;i<n;i++)
            pq.push(arr[i]);
        while(pq.size()>1){
            long long num1=pq.top();
            pq.pop();
            long long num2=pq.top();
            pq.pop();
            res+=num1+num2;
            pq.push(num1+num2);

        }
        return res;
    }
