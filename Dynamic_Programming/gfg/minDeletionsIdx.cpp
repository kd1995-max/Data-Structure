method 1 :-
	
int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    int lis[n];
	    lis[0]=1;
	    for(int i=1;i<n;i++)
	    {
	        lis[i]=1;
	        for(int j=0;j<i;j++)
	        {
	          if(arr[i]>arr[j])
	          lis[i]=max(lis[j]+1,lis[i]);
	        }
	    }
	    int res=*max_element(lis,lis+n);
	    return n - res;
	} 

method 2 :-
int findIDX(int tail[], int n, int l , int r,int key)
	{
	   while (r > l) {         
            int m = l + (r - l) / 2; 
            if (tail[m] >= key) 
                r = m; 
            else
                l = m+1; 
        } 
  
        return r; 
	}
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	     int tail[n]; 
        int len =1; 
  
        tail[0] = arr[0]; 
        
	    for(int i = 1; i < n; i++)
	    {
	        if(arr[i] > tail[len - 1])
	        {
	            tail[len] = arr[i];
	            len++;
	        }
	        else
	        {
	            int c = findIDX(tail,n,0,len - 1, arr[i]);
	            tail[c] = arr[i];
	        }
	    }
	    
	    return n - len;
	}
