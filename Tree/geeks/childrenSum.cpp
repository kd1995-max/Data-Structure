 int isSumProperty(Node *root)
    {
     // Add your code here
     if(root == NULL || root->left == NULL && root->right == NULL)
        return 1;
    queue<Node *>q;
    q.push(root);
    
    while(!q.empty())
    {
        Node *curr=q.front();
        q.pop();
        int sum=0;
        if(curr->left !=NULL)
        {
            q.push(curr->left);
            sum +=curr->left->data;
        }
         if(curr->right !=NULL)
        {
            q.push(curr->right);
            sum +=curr->right->data;
        }
        if(sum != 0 && sum != curr->data)
            return 0;
    }
        return 1;
    
    }
