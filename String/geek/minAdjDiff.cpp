  int minAdjDiff(int arr[], int n){    
        // Your code here
    int min_diff=INT_MAX;
    
     for(int i=1;i<n;i++)
     {
         min_diff=min(min_diff,abs(arr[i-1]-arr[i]));
     }
      min_diff=min(min_diff,abs(arr[n-1]-arr[0]));
      return min_diff;  
        
    }
