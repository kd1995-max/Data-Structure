int longestSubsequence(int n, int a[])
    {
        int lis[n];
        
        for(int i = 0; i < n; i++)
        {
            lis[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(a[j] < a[i])
                {
                    lis[i] = max(lis[i],lis[j] + 1);
                }
            }
        }
        
        auto res = max_element(lis , lis + n);
        
        return *res;
    }
