 bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    if(!root1 and !root2)
    return true;
    
    if(!root1 or !root2)
    return false;
    
    if(root1->data != root2->data)
    return false;
    
    int x=isIsomorphic(root1->left,root2->left) and isIsomorphic(root1->right,root2->right);
    int y=isIsomorphic(root1->left,root2->right) and isIsomorphic(root1->right,root2->left);
    return x or y;
    
    }
