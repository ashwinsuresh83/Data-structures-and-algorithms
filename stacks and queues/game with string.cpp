 int minValue(string s, int k){
        // code here
        int arr[CHAR_MAX]={0};
        for(int i=0;i<s.length();i++)
            arr[s[i]-'a']+=1;
        priority_queue<int>pq;
        for(int i=0;i<CHAR_MAX;i++)
            pq.push(arr[i]);
        while(k--){
            int temp=pq.top();
            pq.pop();
            temp-=1;
            pq.push(temp);
        }
        int sum=0;
        while(!pq.empty()){
            int temp=pq.top();
            sum+=temp*temp;
            pq.pop();
        }
        return sum;
    }
