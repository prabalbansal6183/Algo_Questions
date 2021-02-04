//single source shortest path 
#include<bits/stdc++.h>
using namespace std;
int n,m;
vector< vector< pair<int,int> > > adj;
vector<int> dijkstra(int src)
{
    vector<int> d(n+1,INT_MAX);
    d[src] = 0;
    set < pair<int,int> > dist;
    for(int i=1;i<=n;i++)
        dist.insert(make_pair(d[i],i));
    
    while(!dist.empty())
    {
        auto it = dist.begin();
        int i = it->second;
        dist.erase(it);
        for(pair<int,int> p: adj[i])
        {
           int node = p.first;
           int distance = p.second;
           if(d[i]+distance<d[node])
           {
               dist.erase({d[node],i});
               d[node] = d[i]+distance;
               dist.insert({d[node],i});
           }

        }
    }

    return d;
}
int main()
{
    int i,j,w;
    cin>>n>>m;
    adj.resize(n+1);
    while(m--)
    {
        cin>>i>>j>>w;
       // cout<<i<<j<<w<<endl;
        adj[i].push_back(make_pair(j,w));
        adj[j].push_back(make_pair(i,w));
    }
    vector<int> d = dijkstra(1);
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"\t"<<d[i]<<endl;
    }
    return 0;
}