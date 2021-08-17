 void postodr(Node *root, vector<int>&v)
 {
     if(root !=NULL)
  {
      postodr(root->left,v);
      postodr(root->right,v);
      v.push_back(root->data);
      
  }
   
 }
vector <int> postOrder(Node* root)
{
  // Your code here
vector<int>vec;
postodr(root,vec);
 
  return vec;
  
}
