bool solve(Node* root, Node* min = NULL, Node* max = NULL)
    {
        if(!root)    
        return true;
        
        if(min and min->data >= root->data)
        return false;
        if(max and max->data <= root->data)
        return false;
        
        bool left = solve(root->left,min,root);
        bool right = solve(root->right,root,max);
        
        return left and right;
        
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        return solve(root,NULL,NULL);
    }
