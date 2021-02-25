 bool is_inside(int row,int col,int i,int j)
    {
        return i>=0 && j>=0 && i<row && j<col;
    }
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N)
	{
	    if(KnightPos==TargetPos)
	    {
	        return 0;
	    }
	    vector<vector<int>>vis(N,vector<int>(N,false));
	    queue<pair<int,int>>q;
	    vector<pair<int,int>>v={{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
	    q.push({KnightPos[0]-1,KnightPos[1]-1});
	    vis[KnightPos[0]-1][KnightPos[1]-1]=true;
	    int level=0;
	    while(!q.empty())
	    {
	        int len=q.size();
	        while(len)
	        {
	            pair<int,int>node=q.front();
	            q.pop();
	            for(int i=0;i<v.size();i++)
	            {
	                int x=node.first+v[i].first;
	                int y=node.second+v[i].second;
	                if(x==TargetPos[0]-1 && y==TargetPos[1]-1)
	                {
	                    return level+1;
	                }
	                if(is_inside(N,N,x,y) && !vis[x][y])
	                {
	                    vis[x][y]=true;
	                    q.push({x,y});
	                }
	            }
	            len--;
	        }
	        level++;
	    }
	    return 0;
	}
