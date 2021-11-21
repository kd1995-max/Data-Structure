vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> vec;
    if(!root)  return vec;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        vec.push_back(curr->data);
        if(curr->right) q.push(curr->right);
        if(curr->left) q.push(curr->left);
    }
    reverse(vec.begin(),vec.end());
    
    return vec;
}
