    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        vector<vector<int>>merInt;
        
        if(intervals.size()==0)
            return {};
        sort(intervals.begin(),intervals.end());
        vector<int> tempMrg=intervals[0];
        for(auto it : intervals)
        {
            if(it[0] <=tempMrg[1])
                tempMrg[1]=max(it[1],tempMrg[1]);
            else
            {
               merInt.push_back(tempMrg);
                tempMrg=it;
            }
        }
        merInt.push_back(tempMrg);
        return merInt;
        
    }
