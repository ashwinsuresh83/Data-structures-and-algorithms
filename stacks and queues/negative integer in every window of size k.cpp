int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int k;
	    cin>>k;
	    queue<int> q;
	    for(int i=0;i<k;i++)
	        if(arr[i]<0)
	            q.push(arr[i]);
	   for(int i=k;i<n;i++){
	       if(q.size()>0)
	            cout<<q.front()<<" ";
	       else
	        cout<<0<<" ";
	       if(arr[i-k]<0)
	        q.pop();
	       if(arr[i]<0)
	        q.push(arr[i]);
	   }
	   if(q.size()>0)
	    cout<<q.front()<<" ";
	    else
	        cout<<0<<" ";
	   cout<<"\n";
	}


	return 0;
}
