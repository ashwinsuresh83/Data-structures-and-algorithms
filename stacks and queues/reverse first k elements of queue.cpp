queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    stack<int> helper;
    int size=q.size();
    for(int i=0;i<k;i++){
        int data=q.front();
        q.pop();
        helper.push(data);
    }
    while(!helper.empty()){
        q.push(helper.top());
        helper.pop();
    }
    for(int i=0;i<size-k;i++){
        int data=q.front();
        q.pop();
        q.push(data);

    }
    return q;


}
