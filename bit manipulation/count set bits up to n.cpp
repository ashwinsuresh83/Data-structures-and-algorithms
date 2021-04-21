    int largestPower(int n){
        int x=0;
        while((1<<x)<=n){
            x++;
        }
        return x-1;
    }
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0)
            return 0;
        int x=largestPower(n);
        int countupto2x=(1<<(x-1))*x;
        int y=n-(1<<x)+1;
        return countupto2x+y+countSetBits(n-(1<<x));
    }
