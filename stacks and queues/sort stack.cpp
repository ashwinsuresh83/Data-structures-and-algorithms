void SortedStack :: sort()
{
   //Your code here
   if(s.size()==0 ||s.size()==1)
    return;
    int top=s.top();
    s.pop();
    sort();
    if(top>s.top())
        s.push(top);
    else{
        int temp=s.top();
        s.pop();
        s.push(top);
        sort();
        s.push(temp);
    }

}
