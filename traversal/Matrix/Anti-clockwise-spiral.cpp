// Input:  1    2 <-  3 <-  4
//          |   |           | 
//          5    6       7  8
//          |      |     |   |                   
//          9     10  ->11  12
//          |                  |
//         13  ->  14  ->15 ->16


// Output: 1 5 9 13 14 15 16 12 8 4 3 2 6 10 11 7
// Explanation: The output is matrix in spiral format. 



#include<bits/stdc++.h>
using namespace std;
// vector<int> vec;
// vector<vector<int> > matrix;
int matrix[10][10];
void print_order(int n,int m){
    int k = 0;// starting row index.
    int l = 0; // starting column index.

    // print the first row
while (k<=n&&l<=m)
{
    /* code */

     // print first column
    if(l<m)
    {
        for(int i = k;i<n;i++)
        {
            cout<<matrix[i][l]<<" -> ";
        }
        l++;
    }

    //print the last row
    if(k<n)
    {
        for(int i=l;i<=m-1;i++)
        {
            cout<<matrix[n-1][i]<<" -> ";
        }
        n--;
    }


      //print the last column
    for(int i=n-1;i>=k;i--)
    {
        // cout<<"\n";
        // cout<<i<<" "<<m-1<<endl;
        cout<<matrix[i][m-1]<<" -> ";
    }
    m--;

    for(int i=m-1;i>=l;i--)
    {
        cout<<matrix[k][i]<<" -> ";
    }
    k++;
   
}
}
int main()
{
    int n,m;
    cout<<"no of rows"<<endl;
    cout<<"no of columns"<<"\n";
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            // int a;
            // cin>>a;
            // vec.push_back(a);
            cin>>matrix[i][j];
        }
        //matrix.push_back(vec);
    }
    print_order(n,m);
}