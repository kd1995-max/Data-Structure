vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>>mp;
        queue<pair<Node *, int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            Node * temp=q.front().first;
            int val=q.front().second;
            q.pop();
            mp[val].push_back(temp->data);
            if(temp->left)
                q.push({temp->left,val-1});
            if(temp->right)
                q.push({temp->right,val+1});
        }
        vector<int> res;
        for(auto it : mp)
        {
        for(auto value : it.second)
        {
            res.push_back(value);
        }
        }
        return res;
    }
