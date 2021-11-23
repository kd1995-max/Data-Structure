 int missingNumber(int arr[], int n) 
    { 
        // Your code here
         for(int i=0;i<n;i++)
        {
          while (arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1])  // arr grt than 1 and less than and equal n 
          swap(arr[arr[i]-1],arr[i]);                              //and arr [i] != arr[arr[i]-1]
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=(i+1)) //compare with index
            return i+1;
        }
        return n+1;
        
    }
