int minValue(Node* root) {
    // Code here
    if(!root)
    return -1;
    
    if(!root->left)
    return root->data;
    
   return minValue(root->left);
}


---------------
    int minValue(Node* root) {
    // Code here
    if(root==NULL)
    return -1;
    while(root->left !=NULL)
    {
        root=root->left;
    }
    return root->data;
}
