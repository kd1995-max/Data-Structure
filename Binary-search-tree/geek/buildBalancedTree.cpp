vector<Node *> vec;
void fill_Vec(Node *root)
{
    if(!root)
    return ;
    fill_Vec(root->left);
    vec.push_back(root);
    fill_Vec(root->right);
}
Node *solve(int start,int end)
{
    if(start>end)
    return NULL;
    
    int mid=(start+end)/2;
    Node *root=vec[mid];
    root->left=solve(start,mid-1);
    root->right=solve(mid+1,end);
    return root;
}
Node* buildBalancedTree(Node* root)
{
	// Code here
	vec.clear();
	fill_Vec(root);
	return solve(0,vec.size()-1);
}
