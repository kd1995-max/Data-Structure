vector<int> rightView(Node *root)
    {
       // Your Code here
       if(root==NULL)
        return {};
        vector<int>vec;
        queue<Node *>q;
        
        q.push(root);
        while(q.empty()==false)
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                Node * curr=q.front();
                q.pop();
                
                if(i==0)
                vec.push_back(curr->data);
                
                if(curr->right !=NULL)
                    q.push(curr->right);
                
                if(curr->left!=NULL)
                    q.push(curr->left);
            }
        }
        return vec;
    }
