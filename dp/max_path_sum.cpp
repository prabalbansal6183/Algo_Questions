#include<bits/stdc++.h>
using namespace std;

//   Definition for binary tree
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
 int _max(int a,int b,int c,int d)
 {
     return max(max(max(a,b),c),d);
 }
int maxPathSum(TreeNode* A) {
    if(A==NULL) return 0;
    
    return _max(A->val,maxPathSum(A->left)+A->val+maxPathSum(A->right),maxPathSum(A->left),maxPathSum(A->right));
}
int main()
{
    struct TreeNode B = TreeNode(1);
    B.left = new TreeNode(2);
    B.right = new TreeNode(3);
    cout<<maxPathSum(B);
    return 0;
}