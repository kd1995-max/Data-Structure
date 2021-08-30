
//Method 1
//first occurrence	
	int firstOcc(int arr[],int n,int x)
	{
	    int low=0,high=n-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]>x)
	            high=mid-1;
	       else if(arr[mid]<x)
	            low=mid+1;
	       else
	            {
	                if(mid==0||mid[arr]!=arr[mid-1])
	                return mid;
	                else
	                high=mid-1;
	            }
	    }
	    return -1;
	}
	
		//last occurrence	
	int lastOcc(int arr[],int n,int x)
	{
	    int low=0,high=n-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]>x)
	            high=mid-1;
	       else if(arr[mid]<x)
	            low=mid+1;
	       else
	            {
	                if(mid==n-1||mid[arr]!=arr[mid+1])
	                return mid;
	                else
	                low=mid+1;
	            }
	    }
	    return -1;
	}
	
	
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int first=firstOcc(arr,n,x);
	 //   int last=lastOcc(arr,n,x);
	    if(first==-1)
	        return 0;
	   else
	        return (lastOcc(arr,n,x)-first+1);  
	}

//N=7,X=2,Arr[]={1,1,2,2,2,2,3} o/p:-4
