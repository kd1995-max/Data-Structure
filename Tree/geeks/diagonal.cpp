
vector<int> diagonal(Node *root)
{
   // your code here
   
   if(!root)
    return {};
    
    vector<int>vec;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node * curr=q.front();
        q.pop();
        while(curr)
        {
            if(curr->left)
                q.push(curr->left);
            vec.push_back(curr->data);
            curr=curr->right;
        }
    }
    return vec;
}
