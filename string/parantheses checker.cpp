bool ispar(string x)
{
    // Your code here
    if(x.length()==0)
        return true;
    stack<char> s;
    for(int i=0;x[i]!='\0';i++){
        if(x[i]=='}'){
            if(s.empty())
                return false;
            if(s.top()!='{')
                return false;
            s.pop();
        }
        else if(x[i]==']'){
            if(s.empty())
                return false;
            if(s.top()!='[')
                return false;
            s.pop();
        }
        else if(x[i]==')'){
            if(s.empty())
                return false;
            if(s.top()!='(')
                return false;
            s.pop();
        }
        else{
            s.push(x[i]);
        }
        }
        if(s.empty())
            return true;
        return false;



}
