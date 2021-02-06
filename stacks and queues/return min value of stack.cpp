void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty())
	    s.push(a);
	else{
	    if(s.top()>a)
	        s.push(a);
	    else{
	        s.push(s.top());
	    }
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	int a=s.top();
	s.pop();
	return a;

}

int getMin(stack<int>& s){
	// Your code goes here
	return s.top();
}
