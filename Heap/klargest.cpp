 vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>v;
        priority_queue<int>p(arr,arr+n);
        while(k--)
        {
            v.push_back(p.top());
            p.pop();
        }
        return v;
        
    }
------------------
  vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int> pq(arr,arr+n);
        vector<int> vec;
        
        // while(!pq.empty())
        // {
        //     if(!k--)
        //     break;
            
        //     vec.push_back(pq.top());
        //     pq.pop();
        // }
        while(k--)
        {
             vec.push_back(pq.top());
             pq.pop();
        }
        return vec;
    }
