 int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int count=1;
    	int i=1;
    	int j=0;
    	while(i<n)
    	{
    	    if(arr[i]<=dep[j])
    	    count++;
    	    else
    	    j++;
    	    
    	    i++;
    	}
    	return count;
    	
    }
