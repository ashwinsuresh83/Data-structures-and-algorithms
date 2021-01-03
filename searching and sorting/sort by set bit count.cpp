int countBits(int n){
    int count=0;
    while(n){
        n &=n-1;
        count+=1;
    }
    return count;
}
class Solution{
    public:
    static int cmp(int a,int b){
        int i=countBits(a);
        int j=countBits(b);
        return i>j;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr+n,cmp);

    }
};
