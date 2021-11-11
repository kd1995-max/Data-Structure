  int print2largest(int arr[], int n)
    {
    	//code here.
    	int max_1=INT_MIN, max_2=INT_MIN;
    	for(int i=0;i<n;i++)
    	{
    	    if(max_1<arr[i])
    	    max_1=arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    if(max_1==arr[i])
    	    {
    	        arr[i]=-1;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	{
    	    if(max_2< arr[i])
    	    {
    	        max_2=arr[i];
    	    }
    	}
    	return max_2;
    	
    }
