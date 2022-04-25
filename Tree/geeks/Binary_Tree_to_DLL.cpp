 void solve(Node *root, Node* &head,Node * &prev)
   {
       if(root==NULL)
       return;
          solve(root->left,head,prev);
       if(head==NULL)
       {
           head=root;
           prev=root;
       }
       else
       {
           prev->right=root;
           prev->right->left=prev;
           prev=prev->right;
       }
       solve(root->right,head,prev);
   }
   
    Node * bToDLL(Node *root)
    {
        // your code here
        Node *head=NULL;
        Node *prev=NULL;
        solve(root,head,prev);
        return head;
    }
