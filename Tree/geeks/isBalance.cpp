   int flag=1;
    int balance(Node* root)
    {
        if(!root) return 0;
        int lh=balance(root->left);
        int rh=balance(root->right);
        if(abs(lh-rh)>1) flag=0;
        return max(lh,rh)+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
    //   if (root==NULL) return 0;
    //   int lh=isBalanced(root->left);
    //   if(lh==-1) return -1;
    //   int rh=isBalanced(root->right);
    //   if(rh==-1) return -1;
        
    //     if(abs(lh-rh)>1) return -1;
    //     else return max(lh,rh)+1;
     
        flag=1;
        balance(root);
        return flag;
    }
