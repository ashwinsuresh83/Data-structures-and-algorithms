char* reverse(char *S, int len)
{
    //code here
    stack<char> res;
    for(int i=0;i<len;i++){
        res.push(S[i]);
    }
    int i=0;
    while(!res.empty()){
        S[i]=res.top();
        res.pop();
        i++;
    }
    return S;
}
