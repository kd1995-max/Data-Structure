 string removeConsecutiveCharacter(string St)
    {
        // code here.
        stack<int> s;
        for(auto e : St)
        s.push(e);
        
        string res;
        res.push_back(s.top());
        s.pop();
        
        while(!s.empty())
        {
            if(s.top()!=res.back())
                res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
