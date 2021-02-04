//DFS Implementation using the article on GFG
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int> *adj;
	
	void DFS(int v,bool visited[]);
	public:
		Graph(int V);
		void addEdge(int v,int w);
		void dfs(int s);
	
};
Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
void Graph::DFS(int v,bool visited[])
{
	visited[v] = true;
	cout<<v<<" ";
	
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(!visited[*i])
			DFS(*i,visited);
	}
}
void Graph::dfs(int s)
{
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	
	DFS(s,visited);
	
}
int main()
{
	Graph g(4);
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  	cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n"; 
    g.dfs(0);
}
