void preodr(Node *root,vector<int>&v)
{
    if(root!=NULL)
    {
       v.push_back(root->data);
       preodr(root->left,v);
       preodr(root->right,v);
    }
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>vec;
  preodr(root,vec);
  return vec;
}
