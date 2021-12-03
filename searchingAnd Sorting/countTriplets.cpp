	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int sum_=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        int l=i+1;
	        int r=n-1;
	        while(l<r)
	        {
	            sum_=arr[i]+arr[l]+arr[r];
	            if(sum_<sum)
	            {
	                count+=(r-l);
	                l++;
	            }
	            else
	                r--;
	        }
	    }
	    return count;
	}
		 
