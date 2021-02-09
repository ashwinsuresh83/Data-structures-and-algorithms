queue<int> rev(queue<int> q)
{
    // add code here.
    if(q.empty())
        return q;
    int data=q.front();
    q.pop();
    q=rev(q);
    q.push(data);
    return q;
}
