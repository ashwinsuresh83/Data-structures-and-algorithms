void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code
        int res=-1;
        if(q1.empty())
            return res;
        q1.push(0);
        while(1){
            int curr=q1.front();
            q1.pop();
            if(q1.front()==0){
                res=curr;
                break;
            }
            else{
                q1.push(curr);
            }
        }
        q1.pop();
        return res;
}
