vector<long long> nextLargerElement(vector<long long> arr, int n){
    // Your code here
    stack<long long int> st;
    vector<long long int> res;
    for(int i=n-1;i>=0;i--){

        while(!st.empty() && st.top()<arr[i]){
            st.pop();
        }
        if(st.empty())
            res.push_back(-1);
        else
            res.push_back(st.top());
        st.push(arr[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}
