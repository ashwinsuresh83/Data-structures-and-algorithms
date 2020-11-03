class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
            return 0;
        int arr[prices.size()-1];
        arr[0]=prices[1]-prices[0];
        for(int i=2;i<prices.size();i++){
            int maxn=0;
            for(int j=0;j<i;j++){
                if(prices[i]-prices[j]>maxn)
                    maxn=prices[i]-prices[j];
            }
            arr[i-1]=maxn;
        }
        int maxn=arr[0];
      for(int i=1;i<prices.size()-1;i++){
          if(arr[i]>maxn)
              maxn=arr[i];
      }
        if(maxn<0)
            return 0;
        else

            return(maxn);
    }
};

