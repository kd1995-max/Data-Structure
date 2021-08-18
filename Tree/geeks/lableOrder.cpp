void lblOdr(Node *node,vector<int>&v)
    {
        queue<Node *> q;
        q.push(node);
        if(node==NULL) return;
        
        while(q.empty()==false)
        {
            int count=q.size();
            for(int i=0;i<count;i++)
            {
            Node *curr=q.front();
            q.pop();
            v.push_back(curr->data);
            if(curr->left !=NULL)
                q.push(curr->left);
            if(curr->right !=NULL)
                q.push(curr->right);
        }
        }
    }
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      
      vector<int>vec;
      lblOdr(node,vec);
      return vec;
      
    }
