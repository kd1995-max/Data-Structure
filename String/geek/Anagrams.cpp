    vector<vector<string> > Anagrams(vector<string>& a) {
        //code here
        unordered_map<string,vector<string>>um;
        for(int i=0;i<a.size();i++)
        {
            string str=a[i];
            sort(str.begin(),str.end());
           um[str].push_back(a[i]);
        }
        vector<vector<string>>ans(um.size());
        int idx=0;
        for(auto x:um)
        {
            auto v=x.second;
            for(int i=0;i<v.size();i++)
            {
               ans[idx].push_back(v[i]); 
            }
            idx++;
        }
        return ans;
    }
