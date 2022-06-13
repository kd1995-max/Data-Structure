 int KthLargest(int arr[], int n, int k) {
        // Your code here
         priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<k;i++)
            p.push(arr[i]);
            
            for(int i=k;i<n;i++)
            {
               if(p.top()>arr[i]) 
               continue;
               else
               {
                   p.pop();
                   p.push(arr[i]);
               }
            }
            return p.top();
            
        }
-----------------
 int KthLargest(int arr[], int n, int k) {
        // Your code here
        
        priority_queue<int>pq(arr,arr+n);
        
        for(int i=1;i<=n;i++)
        {
            if(i == k)
            return pq.top();
            
            pq.pop();
        }
        
        return -1;
    }
