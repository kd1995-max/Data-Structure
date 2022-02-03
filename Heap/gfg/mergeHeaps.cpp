 vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        pq.push(a[i]);
         for(int i=0;i<m;i++)
        pq.push(b[i]);
        
        vector<int> vec;
        while(!pq.empty())
        {
              vec.push_back(pq.top());
              pq.pop();
        }
        
        return vec;
    }
// log(n+m)*(m+n)
