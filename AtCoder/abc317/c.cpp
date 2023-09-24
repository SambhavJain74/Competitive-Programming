#include<bits/stdc++.h>
using namespace std;

void DFS(vector<pair<int,int>>graph[],int src,int prev_len,int *max_len,vector<bool>&visited)
{
	visited[src]=true;
	int curr_len=0;
	pair<int,int>adjacent;
	for(int i=0;i<graph[src].size();i++)
	{
		adjacent=graph[src][i];
		if(!visited[adjacent.first])
		{
			curr_len=prev_len+adjacent.second;
			DFS(graph,adjacent.first,curr_len,max_len,visited);
            visited[adjacent.first]=false;
		}
        *max_len=(*max_len<curr_len)?curr_len:*max_len;
		curr_len=0;
	}
}

int longestCable(vector<pair<int,int>>graph[],int n)
{
	int max_len=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		vector<bool>visited(n+1,false);
		DFS(graph,i,0,&max_len,visited);
	}
	return max_len;
} 

int main()
{
	int n,m,a,b,c;
    cin>>n>>m;
	vector<pair<int,int>>graph[n+1];
    while(m--)
    {
        cin>>a>>b>>c;
        graph[a].push_back(make_pair(b,c));
	    graph[b].push_back(make_pair(a,c));
    }
	cout<<longestCable(graph,n)<<"\n";
	return 0;
}
