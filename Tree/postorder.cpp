#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int key;
  struct Node *left;
  struct Node *right;
  Node(int k)
  {
    key=k;
    left=NULL;
    right=NULL;
  }
};
void postorder(Node *root) //left right root
{
  if(root !=NULL)
  {
   postorder(root->left);
   postorder(root->right);
   cout<<root->key<<" ";
  }
}
int main()
{
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	postorder(root);
}
//output: 20 40 50 30 10 

