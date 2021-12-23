  int solve(Node *root,int &max_)
    {
        if(!root)
        return 0;
        
        int parent=root->data;
        
        int left=max(0,solve(root->left,max_));
        int right=max(0,solve(root->right,max_));
        
        max_=max(max_,left+right+parent);
        return max(left,right)+parent;
    }
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int max_=INT_MIN;
        solve(root,max_);
        return max_;
    }
