	vector<vector<int>>nearest(vector<vector<int>>grid){
	    // Code here

	    queue<pair<int,int>> q;
	    int m=grid.size();
	    int n=grid[0].size();
	    int arr[m][n];
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            arr[i][j]=INT_MAX;
	        }
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(grid[i][j]==1){
	                q.push({i,j});
	            }
	        }
	    }
	    int dist=0;
	    int row_val[]={-1,1,0,0};
	    int col_val[]={0,0,-1,1};
	    while(!q.empty()){
	        int size=q.size();
	        for(int i=0;i<size;i++){
	            pair<int,int> curr=q.front();
	            q.pop();
	            arr[curr.first][curr.second]=min(dist,arr[curr.first][curr.second]);
	            for(int j=0;j<4;j++){
	                int r=curr.first+row_val[j];
	                int c=curr.second + col_val[j];
	                if(r>=0 && r<m && c>=0 && c<n && arr[r][c]==INT_MAX){
	                    q.push({r,c});
	                }
	            }
	        }
	        dist++;
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            grid[i][j]=arr[i][j];
	        }
	    }
	    return grid;
	}
};
