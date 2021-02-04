#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n,k,i;
    cin>>n>>k;
    if(n==1||k==1)
        return k;
    if(n==k)
        return 1;
    if(k>n)
    {
        i=1;
        while(n*i<k)
        {
            i++;
        }
        return i;
    }

    
    return 2;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
}
// /media/kali-user/New Volume1/DCN PPTS