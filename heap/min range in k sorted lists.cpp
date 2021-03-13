#include<queue>
pair<int,int> findSmallestRange(int arr[][N], int n, int k)
{
      //code here
      int minRange=INT_MAX;
      int upper_bound,lower_bound;
      int max_element=0;
      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
      for(int i=0;i<k;i++){
          pq.push({arr[i][0],{i,0}});
          if(arr[i][0]>max_element)
            max_element=arr[i][0];
      }
      while(pq.size()==k){
          pair<int,pair<int,int>> curr=pq.top();
          pq.pop();
          int ele=curr.first;
          int row=curr.second.first;
          int col=curr.second.second;
          if(max_element-ele<minRange){
              minRange=max_element-ele;
              upper_bound=max_element;
              lower_bound=ele;
          }
          if(col==n-1)
            break;
          pq.push({arr[row][col+1],{row,col+1}});
          if(arr[row][col+1]>max_element)
            max_element=arr[row][col+1];

      }
      pair<int,int> res={lower_bound,upper_bound};
      return res;
}
