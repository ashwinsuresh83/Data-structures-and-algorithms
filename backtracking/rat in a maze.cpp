void helper(int i,int j,int m[MAX][MAX],int n,string s,vector<string> &res){
    if(i>=n || j>=n || j<0 || i<0 || m[i][j]==100 || m[i][j]==0){
        return;
    }
    if(i==n-1 && j==n-1){
        res.push_back(s);
        return;
    }
    else{
        m[i][j]=100;
        helper(i+1,j,m,n,s+'D',res);
        helper(i,j-1,m,n,s+'L',res);
        helper(i,j+1,m,n,s+'R',res);
        helper(i-1,j,m,n,s+'L',res);
        m[i][j]=1;
    }
}
vector<string> findPath(int m[MAX][MAX], int n) {
    // Your code goes here
    vector<string> res;
    string s="";
    int i=0,j=0;
    helper(i,j,m,n,s,res);

    return res;

}
