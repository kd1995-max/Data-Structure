//1:-   
//Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
       
        int csum=arr[0];
        int msum=arr[0];
        for(int i=1;i<n;i++)
        {
            csum = max(arr[i],arr[i]+csum);
            msum = max(csum,msum);
        }
        return msum;
    }
//2:-

long long maxSubarraySum(int arr[], int n){
        
                // Your code here
        int maxsum = arr[0];
        int res = arr[0];
        for(int i = 1; i< n; i++)
        {
            //
            maxsum = max(maxsum + arr[i] , arr[i]);
            res = max(res , maxsum);
        }
        return res;

    }
