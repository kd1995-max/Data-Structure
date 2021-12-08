 int minValue(string s, int k){
        // code here
        
        unordered_map<char,int> um;
        
        for(auto e : s)
         um[e]++;
         
        priority_queue<int> pq;
         for( auto e : um)
        pq.push(e.second);
        
        while(k>0)
        {
            int x=pq.top();
            pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        
        int sum=0;
        while(!pq.empty())
        {
            int n=pq.top();
            sum +=n*n;
            pq.pop();
        }
        
       return sum; 
    }
