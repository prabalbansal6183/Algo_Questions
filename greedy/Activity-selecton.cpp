#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }
	   //sort(v.begin(),v.end());
	   //int count=0;
	   //for(int i=v.size()-1;i>0;i--)
	   //{
	   //    if((v[i]-v[0])>k)
	   //    {
	   //        count+=(v[i]-k-v[0]);
	   //    }
	   //}
	   // cout<<count<<endl;
	   //find minimum no 
	   int mina = INT_MAX;
	   for(int i=0;i<n;i++)
	        mina = min(mina,v[i]);
	    
	  
	   for(int i=0;i<n;i++)
	   {
	       v[i]-=mina;
	   }
	   
	   int count =0;
	   for(int i=0;i<n;i++)
	   {
	       if(v[i]>k)
	            count+=v[i]-k;
	   }
	   cout<<count<<endl;
	}
	return 0;
}