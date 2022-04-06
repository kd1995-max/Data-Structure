
Method:-
int print2largest(int arr[], int n)
    {
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
Method 2:
 int largest(int arr[],int n)
   {
       int max=arr[0];
       for(int i=1;i<n;i++)
       {
           if(arr[i]>max)
           max=arr[i];
       }
       return max;
   }
    int print2largest(int arr[], int n)
    {
    	//code here.
    	int larg=largest(arr,n);
    	int res=-1;
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]!=larg)
    	    {
    	        if(res==-1)
    	            res=arr[i];
    	        else if(arr[i]>res)
    	        res=arr[i];
    	    }
    	   
    	}
    	 return res;
    }
