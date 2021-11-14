 vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
           if(n == 1 and arr[0] == s)
            return {1 , 1};
        else if(n == 1 and arr[0] != s)
            return {-1};
            
        int end , start = 0 , sum = arr[0];
        
        for(int end = 1; end <= n; end++) //<= because we also need to handle the last element
        {
            
            while(sum > s and start < end - 1)
            {
                sum -= arr[start];
                start++;
            }
            
            if( sum == s )
            {
                return {start + 1 , end};
            }
            
            if(end < n)
            sum += arr[end];
        }
        
        return {-1};

    }
