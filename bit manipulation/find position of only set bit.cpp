    int findPosition(int N) {
        // code here
        int pos=0;
        int res=0;
        int count=0;
        while(N>0){
            if((N&1)==1){
                count++;
                res=pos;
            }
            N/=2;
            pos++;
        }
        if(count>1 || count==0)
            return -1;
        return pos;
    }
