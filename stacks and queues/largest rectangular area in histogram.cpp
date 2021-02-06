long long getMaxArea(long long arr[], int n){

    // Your code here
    long long left[n],right[n];
    stack<long long> st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            left[i]=0;
            st.push(i);
        }
        else{
        while(!st.empty() && arr[st.top()]>=arr[i])
            st.pop();
        left[i]=st.empty()?0:st.top()+1;
        st.push(i);
        }
    }
    while(!st.empty())
        st.pop();
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            right[i]=n-1;
            st.push(i);
        }
        else{
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            right[i]=st.empty()?n-1:st.top()-1;
            st.push(i);
        }
    }
    long long max_height=0;
    for(int i=0;i<n;i++){
        max_height=max(max_height,(right[i]-left[i]+1)*arr[i]);
    }
    return max_height;


}
