    vector<string> removeInvalidParentheses(string s) {
        unordered_set<string> result;
        int remove_left=0,remove_right=0;
        for(auto i:s){
            if(i=='('){
                remove_left++;
            }
            else if(i==')'){
                if(remove_left>0)
                    remove_left--;
                else
                    remove_right++;
            }
        }
        helper(s,remove_left,remove_right,0,0,"",result);
        return vector<string>(result.begin(),result.end());
    }
    void helper(string s,int remove_left,int remove_right,int pair,int index,string sol,unordered_set<string> &result){
        if(index==s.size()){
            if(remove_left==0 && remove_right==0 && pair==0)
                result.insert(sol);
            return;
        }
        if(s[index]=='('){
            if(remove_left>0)
                helper(s,remove_left-1,remove_right,pair,index+1,sol,result);

            helper(s,remove_left,remove_right,pair+1,index+1,sol+s[index],result);

        }
        if(s[index]==')'){
            if(remove_right>0)
                helper(s,remove_left,remove_right-1,pair,index+1,sol,result);
            if(pair>0)
                helper(s,remove_left,remove_right,pair-1,index+1,sol+s[index],result);
        }
        else{
            helper(s,remove_left,remove_right,pair,index+1,sol+s[index],result);
        }
    }
