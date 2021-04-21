    int countBitsFlip(int a, int b){

        // Your logic here
        int count=0;
        while(a>0||b>0){
            int x=a&1;
            int y=b&1;
            if(x^y==1)
                count++;
            a=a/2;
            b=b/2;
        }
        return count;

    }
