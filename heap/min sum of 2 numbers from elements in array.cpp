    string findSum(long long num1,long long num2){

        string res="";
        int carry=0;
        while(num1>0 && num2>0){
            int digit1=num1%10;
            num1=num1/10;
            int digit2=num2%10;
            num2=num2/10;
            int calc=(digit1+digit2+carry)%10;
            carry=(digit1+digit2+carry)/10;
            res=to_string(calc)+res;
        }
        while(num1>0){
            int digit=num1%10;
            num1=num1/10;
            int cal=(digit+carry)%10;
            carry=(digit+carry)/10;
            res=to_string(cal)+res;

        }
        while(num2>0){
            int digit=num2%10;
            num2=num2/10;
            int cal=(digit+carry)%10;
            carry=(digit+carry)/10;
            res=to_string(cal)+res;

        }
        if(carry!=0)
            res=to_string(carry)+res;
        for(int i=0;i<res.size();i++){
            if(res[i]!='0'){
                return res.substr(i);
            }
        }
        return "0";


    }
    string solve(int arr[], int n) {
        // code here
        long long num1=0,num2=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
            pq.push(arr[i]);
        while(!pq.empty()){
            if(pq.size()%2==0){
                num1=num1*10+pq.top();
                pq.pop();
            }
            else{
                num2=num2*10+pq.top();
                pq.pop();
            }
        }
        return findSum(num1,num2);
    }
