int maxProfit(vector<int>& vec) {
        
          int maxProfit = 0;
        int minPrice = vec[0];
        for(int i = 0; i < vec.size(); i++)
        {
            minPrice = min(minPrice , vec[i]);
            maxProfit= max(maxProfit , vec[i] - minPrice);
        }
        return maxProfit;
    }
