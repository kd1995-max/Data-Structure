bool check(Node * root,int k)
{
    if(!root) return false;
    if(!root->left && !root->right)
    {
        if(k==0)
         return true;
         return false;
    }
    bool left=check(root->left,k-1);
    bool right=check(root->right,k-1);
    return left||right;
}
void inorder(Node *root,int k,int &count)
{
    if(!root) return;
    inorder(root->left,k,count);
    if(check(root,k))
        count++;
   inorder(root->right,k,count);
}
int printKDistantfromLeaf(Node* root, int k)
{
	//Add your code here. 
	int count=0;
	inorder(root,k,count);
	return count;
}
