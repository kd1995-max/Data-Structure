vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> vec;
        set<vector<int>> s;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                int sum=arr[i]+arr[j]+arr[l]+arr[r];
                if(sum==k)
                {
                    s.insert({arr[i],arr[j],arr[l],arr[r]});
                    l++;
                    r--;
                }
                else if(sum > k)
                r--;
                else
                l++;
                }
            }
        }
        for(auto e: s)
        vec.push_back(e);
        
        return vec;
    }
