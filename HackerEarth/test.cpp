#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1010];

int main()
{

	int x, y, nodes, edges;
	cin >> nodes;       //Number of nodes
	cin >> edges;       //Number of edges
	for(int i = 0; i < edges; ++i)
	{
		cin >> x >> y;
		adj[x].push_back(y);        //Insert y in adjacency list of x
	}

	int q;
	cin >> q;
	while(q--)
	{
		int a,b,flag=0;
		cin >> a >> b;
		
		for(int i = 0; i < adj[a].size(); ++i)
		{
			if(adj[a][i] == b) flag = 1;
		}
		if(flag == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
		
	}

}
