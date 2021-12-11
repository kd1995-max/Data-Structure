 int solve(Node *root)
    {
        if(!root) return 0;
        
        int a=solve(root->left);
        int b=solve(root->right);
        int x=root->data;
        root->data=a+b;
        return x+a+b;
        
    }
    
    void toSumTree(Node *node)
    {
        // Your code here
       solve(node);
    }
