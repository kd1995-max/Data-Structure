string removePair(string str)
    {
        // Your code here
        stack<int> q;
        
        q.push(str[0]);
        
        for(int i = 1; i < str.length(); i++)
        {
            if(!q.empty() && q.top() == str[i])
            {
                q.pop();
            }
            else
            {
                q.push(str[i]);
            }
        }
        
        string ans;
        
        while(!q.empty())
        {
            ans.push_back(q.top());
            q.pop();
        }
        
        reverse(ans.begin() , ans.end());
        return ans;
    }
