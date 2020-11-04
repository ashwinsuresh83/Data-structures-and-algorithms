	long long maxProduct(int *arr, int n) {
	    // code here
	    long long maxProd=0;
	    for(int i=0;i<n;i++){
	        long long currProd=arr[i];
	        if(currProd>maxProd)
	            maxProd=currProd;
	        for(int j=i+1;j<n;j++){
	            currProd*=arr[j];
	            if(currProd>maxProd)
	                maxProd=currProd;
	        }
	    }
	    return maxProd;
	}
