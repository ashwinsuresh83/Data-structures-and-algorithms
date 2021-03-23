 cpp_int findCatalan(int n) {
        //code here
        cpp_int res[n+1];
        res[0]=res[1]=1;
        for(int i=2;i<=n;i++){
            res[i]=0;
            for(int j=0;j<i;j++){
                res[i]+=res[j]*res[i-j-1];
            }
        }
        return res[n];

    }