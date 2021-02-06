class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int>st;
        st.push(-1);
        int max_len=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                st.push(i);
            else{

                if(!st.empty()){
                    st.pop();
                }
                if(!st.empty()){
                    max_len=max(max_len,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
        return max_len;

    }
};
