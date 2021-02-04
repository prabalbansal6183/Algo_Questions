#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> mapp;
bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
    {
        return a.first<b.first;
    }
    int f = a.second;
    int s = b.second;
    if(mapp[f]!=mapp[s])
    {
        return mapp[f]<mapp[s];
    }
    
    return a.second<b.second;
}
vector<int> engineeringCutoff(int n, vector<vector<int>> &marks)
{
    vector<pair<int,int> > ele; 
   
   vector<int> v;
    // cout<<marks[0].size();
    int sid_mrk = marks[0].size();
    // cout<<marks.size();
    int stud = marks.size();
    for(int i=0;i<stud;i++)
    {
        int sum=0;
        int sum2 = 0;
        for(int j=1;j<sid_mrk;j++)
        {
            if(marks[i][j]<=34)
            {
                break;
            }
            sum2+= marks[i][j];
            if(j<=3)
            {
                sum =sum + marks[i][j];
            }
            if(j==sid_mrk-1)
            {
                ele.push_back({sum,marks[i][0]});
               mapp[marks[i][0]] = sum2;
            }
         }
    }
    sort(ele.begin(),ele.end(),comp);
    for(auto x: ele)
    {
        v.push_back(x.second);
    }
   reverse(v.begin(), v.end()); 
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> marks(n);
    int id, s0, s1, s2, s3, s4;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> s0 >> s1 >> s2 >> s3 >> s4;
        marks[i] = {id, s0, s1, s2, s3, s4};
    }
    vector<int> ans = engineeringCutoff(n, marks);
    for (int j : ans)
    {
        cout << j << " ";
    }
    cout << "\n";
}