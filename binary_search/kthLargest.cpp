   void helper(Node *root, int k,int &c,int &ans)
    {
        if(!root)
        return ;
        
        helper(root->right,k,c,ans);
        c++;
        if(k==c)
        ans=root->data;
        helper(root->left,k,c,ans);
        
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int c=0;
        int ans=-1;
        helper(root,K,c,ans);
        return ans;
    }
