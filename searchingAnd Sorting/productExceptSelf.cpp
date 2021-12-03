 vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        if(n==1)
        return {1};
        long long l[n];
        long long r[n];
        
        l[0]=nums[0];

        for(long long i=1;i<n;i++)
        {
            l[i]=l[i-1]*nums[i];
        }
         r[n-1]=nums[n-1];
        for(long long i=n-2;i>=0;i--)
        {
            r[i]=r[i+1]*nums[i];
        }
        
        vector<long long>vec(n);
        vec[0]=r[1];
       
       for(long long i=1;i<n-1;i++)
       {
           vec[i]=l[i-1]*r[i+1];
           
       }
        vec[n-1]=l[n-2];
        return vec;
    }
    
