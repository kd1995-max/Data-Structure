int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                c++;
            else
                c=0;
            res=max(res,c);
        }
        return res;
        
    }
