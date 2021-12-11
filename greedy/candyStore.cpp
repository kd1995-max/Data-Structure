 vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        sort(candies,candies+n);
        int max_=0;
        int min_=0;
        
        int l=0;
        int r=n-1;
        
        while(l<=r)
        {
            min_ +=candies[l];
            l++;
            r=r-k;
        }
        reverse(candies,candies+n);
        
        l=0;
        r=n-1;
        while(l<=r)
        {
            max_ +=candies[l];
            l++;
            r=r-k;
        }
        return {min_,max_};
    }
