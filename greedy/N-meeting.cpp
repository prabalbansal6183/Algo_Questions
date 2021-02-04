// Problem description.

#include<bits/stdc++.h>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;
    
};
bool comparator(struct meeting m1,struct meeting m2)
{
    if(m1.start<m2.start)
        return true;
    if(m1.end>m2.end)
        return false;
    if(m1.pos<m2.pos)
        return true;
        
    return false;
}
void maxMeetings(int start[], int end[], int n) {
  struct meeting meet[n];
  for(int i=0;i<n;i++)
  {
      meet[i].start = start[i]; meet[i].end = end[i]; meet[i].pos = i+1;
  }
  sort(meet,meet+n,comparator);
  int e = meet[0].end;
  int count = 0;
  for(int i=1;i<n;i++)
  {
      if(e<meet[i].start)
      {
          cout<<meet[i].pos<<" ";
          e = meet[i].end;
      }
  }
  cout<<endl;

  
}
int main()
{
  int t;
  cin>>t;
  int s[t],e[t];
  for(int i=0;i<t;i++)
  {
      cin>>s[i]>>e[i];
  }
  maxMeetings(s,e,t);
  return 0;
}