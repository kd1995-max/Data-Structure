  void solve(Node * root, int target,int &flag,unordered_set<int> &s)
    {
        if(root== NULL)
        return ;
        solve(root->left,target,flag,s);
        
        if(s.find(target-root->data) !=s.end())
        {
            flag=1;
            return;
        }
        else
        s.insert(root->data);
       solve(root->right,target,flag,s);

        
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    
    int flag=0;
    unordered_set<int>s;
    solve(root,target,flag,s);
    return flag;
    }
