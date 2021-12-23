bool function__(Node* node1,Node* node2)
{
    if(!node1 and !node2)
    return true;
     if(!node1 || !node2)
    return false;
    
    bool left=function__(node1->left,node2->right);
    bool right=function__(node1->right,node2->left);
    bool isfold=left and right;
    return isfold;
    
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
    return true;
    
    return function__(root->left,root->right);
}
