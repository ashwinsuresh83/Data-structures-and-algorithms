		string FirstNonRepeating(string A){
		    // Code here
		    queue<char>q;
		    int count[26]={0};
		    string res;
		    for(int i=0;A[i];i++){
		        q.push(A[i]);
		        count[A[i]-'a']++;
		        while(!q.empty()){
		            if(count[q.front()-'a']>1)
		                q.pop();
		          else{
		              res+=q.front();
		              break;
		          }
		        }
		        if(q.empty())
		            res+='#';
		}
		    return res;
		}
