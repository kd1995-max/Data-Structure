void leftTree(Node *root,vector<int>&vec)
{
    if(!root)
    return;
  if(root->left)
  {
      vec.push_back(root->data);
      leftTree(root->left,vec);
  }
  else if(root->right)
  {
      vec.push_back(root->data);
      leftTree(root->right,vec);
  }
}
void rightTree(Node *root,vector<int>&vec)
{
   if(!root)
    return;
  if(root->right)
  {
      
       rightTree(root->right,vec);
       vec.push_back(root->data);
      
  }
  else if(root->left)
  {
     
       rightTree(root->left,vec);
        vec.push_back(root->data);
  }  
}

void leaf(Node *root,vector<int>&vec)
{
  if(!root)
    return;
    leaf(root->left,vec);
    if(!root->left and !root->right)
    vec.push_back(root->data);
    leaf(root->right,vec);
  
}

 vector <int> boundary(Node *root)
    {

    vector<int> vec;
    vec.push_back(root->data);
    
    leftTree(root->left,vec);
    leaf(root,vec);
    rightTree(root->right,vec);
    
    return vec;
    }
