	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int lis[n];
	    lis[0]=arr[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        lis[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]> arr[j])
	            lis[i]=max(lis[i],lis[j]+arr[i]);
	        }
	    }
	   auto res= *max_element(lis,lis+n);
	   return res;
	}  
