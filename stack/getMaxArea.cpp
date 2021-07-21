long long getMaxArea(long long heights[], int n)
    {
        // Your code here
        
        
        
         vector<long long> left(n) ;
        vector<long long> right(n);
 
        stack<long long> s;
 
 
       //width --- left
        for(long long i=0;i<n;i++){
 
            while(!s.empty() && heights[i]<=heights[s.top()]){
                s.pop();
            }
 
            if(s.empty()){
                left[i] = -1;
            }else{
                left[i] = s.top();
            }
 
            s.push(i);
        }
 
        while(!s.empty()){
            s.pop();
        }
        
        //width --- right
        for(long long i=n-1;i>=0;i--){
 
            while(!s.empty() && heights[i]<=heights[s.top()]){
                s.pop();
            }
 
            if(s.empty()){
                right[i] = n;
            }else{
                right[i] = s.top();
            }
 
            s.push(i);
        }
 
        long long area = 0;
 
         for(long long i=0;i<n;i++){
            long long width = right[i]-left[i]-1;
            area = max(heights[i]* width ,area);
         }
 
        return area;
    }
