void StackQueue :: push(int x)
 {
        // Your Code
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code
        int top;
        if(s1.empty())
            return -1;
        while(!s1.empty()){
            top=s1.top();
            s1.pop();
            if(!s1.empty())
                s2.push(top);
        }
        while(!s2.empty()){
            int curr=s2.top();
            s2.pop();
            s1.push(curr);
        }
        return top;

}
