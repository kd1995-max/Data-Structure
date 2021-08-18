void lblOdr(Node *node,vector<vector<int>>&vec)
{
   if(node==NULL) return ;
   queue<Node *>q;
   q.push(node);
   while(q.empty()==false)
   {
       int count=q.size();
       vector<int>v;
       for(int i=0;i<count;i++)
       {
           
           Node *curr=q.front();
           q.pop();
           v.push_back(curr->data);
           if(curr->left!=NULL) q.push(curr->left);
           if(curr->right!=NULL) q.push(curr->right);
       }
       vec.push_back(v);
   }
   
}
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>>vec;
  lblOdr(node,vec);
  return vec;
  
}

