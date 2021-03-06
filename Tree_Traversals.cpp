#include<bits/stdc++.h>
using namespace std;
struct Node{
	int val;
	struct Node *left,*right;
	public:
		Node(int val){
			this->val = val;
			left = right = NULL;
		}
};

void Inorder(Node *root)
{
	if(root==NULL)
		return ;
	Inorder(root->left);
	cout<<root->val<<" ";
	Inorder(root->right);
}
void postorder(Node *root)
{
	if(root==NULL)
		return ;
	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";
}
void preorder(Node *root)
{
	if(root==NULL)
		return ;
	cout<<root->val<<" "<<endl;
	preorder(root->left);
	preorder(root->right);
}
int main()
{
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	cout<<"In-order traversal of the tree is"<<endl;
	Inorder(root);
	cout<<"\n";
	
	cout<<"post order treaversal"<<endl;
	postorder(root);
	cout<<"\n";
	
	cout<<"preorder traversal of the tree is"<<endl;
	preorder(root);
	cout<<"\n";
}
