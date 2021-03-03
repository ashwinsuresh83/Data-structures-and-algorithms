#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int v;
	    cin>>v;
	    int dist[v][v];
	    for(int i=0;i<v;i++){
	        for(int j=0;j<v;j++){
	            cin>>dist[i][j];
	        }
	    }
	    for(int k=0;k<v;k++){
	        for(int i=0;i<v;i++){
	            for(int j=0;j<v;j++){
	                if(dist[i][k]==INT_MAX || dist[k][j]==INT_MAX)
	                    continue;
	                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
	            }
	        }
	    }
	    for(int i=0;i<v;i++){
	        for(int j=0;j<v;j++){
	            if(dist[i][j]==10000000)
	                cout<<"INF ";
	            else
	                cout<<dist[i][j]<<" ";
	        }
	        cout<<"\n";
	    }
	}

	return 0;
}
