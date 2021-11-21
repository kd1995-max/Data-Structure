void pre(Node* root,vector<int> &vec)
{
    if(root!=NULL)
    {
        vec.push_back(root->data);
        pre(root->left,vec);
        pre(root->right,vec);
    }
}

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>vec;
  pre(root,vec);
  return vec;
}
