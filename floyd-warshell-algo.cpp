#include <bits/stdc++.h>
using namespace std;
#define ll long 
#define inf 1e7
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	ll int v;
	cin>>v;
	ll int dist[v][v];
	for(int i=0;i<v;i++)
	   { for(int j=0;j<v;j++)
	        {   
				cin>>dist[i][j];
	        }
	   }    
	for(int k=0;k<v;k++)
	{
	    for(int i=0;i<v;i++)
	    {
	        for(int j=0;j<v;j++)
	        {
	            if(dist[i][j]>dist[i][k]+dist[k][j])
	                dist[i][j] = dist[i][k]+dist[k][j];
	        }
	    }
	}
	
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(dist[i][j]==inf)
                cout<<"INF"<<" ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<"\n";
    }
	        
    }
	return 0;
}