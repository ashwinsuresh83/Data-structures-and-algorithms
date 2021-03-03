typedef pair<int,int> Pi;
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int rows=board.size();
        int cols=board[0].size();
        int target=rows*cols;
        int r,c;
        vector<bool> visited(rows*cols+1,false);
        priority_queue<Pi,vector<Pi>,greater<Pi>> q;
        q.push(make_pair(0,1));
        visited[1]=true;
        while(!q.empty()){
            auto step_pos=q.top();

            q.pop();
            int min_steps=step_pos.first/1000+1;

            for(int i=1;i<=6;i++){
                auto pos=step_pos.second + i;
                if(visited[pos])
                    continue;
                visited[pos]=true;
                r=rows-(pos-1)/cols -1;
                c=(pos-1)%cols;
                if((rows-r-1)%2==1)
                    c=cols-c-1;
                int ladder=board[r][c];
                if(ladder>0 && ladder<=target)
                    pos=ladder;
                if(pos==target)
                    return min_steps;
                q.push(make_pair(min_steps*1000 + 500-pos,pos));
            }
        }
        return -1;
    }
};
