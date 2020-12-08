    int countSquares(int N) {
        // code here
        int count=0;
        for(int i=1;i<ceil(sqrt(N));i++){
            if(i*i<N)
                count++;
            else
                break;
        }
        return count;
    }
