    void heapify(int arr[],int i,int n){
        if(i>=n/2)
            return;
        int largest=arr[i];
        if(2*i+1<n && arr[2*i+1]>largest){
            largest=2*i+1;
        }
        if(2*i+2<n && arr[2*i+2]>largest){
            largest=2*i+2;
        }
        if(i!=largest){
            swap(arr[i],arr[largest]);
            heapify(arr,largest,n);
        }
    }
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    for(int i=n/2-1;i>=0;i--){
	        heapify(arr,i,n);
	    }


        for(int i=k;i<n;i++){
	        if(arr[0]<arr[i])
	            continue;
	        arr[0]=arr[i];
	        heapify(arr,0,n);
	    }
	    vector<int> res;
	    for(int i=0;i<k;i++)
	        res.push_back(arr[i]);
	   return res;
	}
