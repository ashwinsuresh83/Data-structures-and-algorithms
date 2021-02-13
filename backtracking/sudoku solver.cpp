bool isValid(int num,int row,int col,int grid[N][N]){
    for(int i=0;i<9;i++){
        if(grid[row][i]==num)
            return false;
        if(grid[i][col]==num)
            return false;
    }
    int root=sqrt(9);
    int rowStart=row-row%root;
    int colStart=col-col%root;
    for(int i=rowStart;i<rowStart+root;i++){
        for(int j=colStart;j<colStart+root;j++){
            if(grid[i][j]==num)
                return false;
        }
    }
    return true;

}

bool SolveSudoku(int grid[N][N])
{
    // Your code here
    int row=-1,col=-1;
    int flag=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(grid[i][j]==0){
                row=i;
                col=j;
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0){

        return true;
    }
    for(int i=1;i<=9;i++){
        if(isValid(i,row,col,grid)){
            grid[row][col]=i;
            if(SolveSudoku(grid))
                return true;

            grid[row][col]=0;

        }
    }
    return false;


}


void printGrid (int grid[N][N])
{
    // Your code here
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<grid[i][j]<<" ";
        }

    }
}
