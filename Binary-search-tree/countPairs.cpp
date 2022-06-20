bool element_find(Node * root2, int k, int &c)
{
    if(!root2)
    return false;
    
    if(k==root2->data)
    return true;
    
    bool x=false;
    bool y=false;
    
    if(k < root2->data)
    x=element_find(root2->left,k,c);
    
    else if(k > root2->data)
    y=element_find(root2->right,k,c);
    
    return x || y;
}
void solve(Node *root1, Node *root2,int k,int &c)
{
    if(!root1)
    return;
    
    solve(root1->left,root2,k,c);
    
    if(element_find(root2,k-root1->data,c))
    c++;
    
    solve(root1->right,root2,k,c);
}
    int countPairs(Node* root1, Node* root2, int x)
    {
    int c=0;
    solve(root1,root2,x,c);
    return c;
    }
