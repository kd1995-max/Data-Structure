  void connect(Node *root)
    {
       // Your Code Here
       queue<Node *>q;
       q.push(root);
       
       while(!q.empty())
       {
           Node * res=NULL;
           int size=q.size();
           
           for(int i=1;i<=size;i++)
           {
               Node * curr=q.front();
               q.pop();
               
               if(curr->left)
               q.push(curr->left);
               if(curr->right)
               q.push(curr->right);
               
               if(res==NULL)
               res=curr;
               else
               {
                   res->nextRight=curr;
                   res=res->nextRight;
               }
           }
       }
       
       
       
    }    
