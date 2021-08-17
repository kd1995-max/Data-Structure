void kdist(Node * root,vector<int>&v,int k)
{
    if(root==NULL)
    return ;
    if(k==0)
    v.push_back(root->data);
    else
    {
        kdist(root->left,v,k-1);
        kdist(root->right,v,k-1);
    }
    
}


vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> vec;
  kdist(root,vec,k);
  return vec;
}
