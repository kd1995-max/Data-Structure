 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> vec;
        stack<long long> s;
        vec.push_back(-1);
        s.push(arr[n-1]);
        for(long long i=n-2;i>=0;i--)
        {
            while(!s.empty() && s.top()<=arr[i])
            s.pop();
            long long grt=s.empty()?-1:s.top();
            
            vec.push_back(grt);
            s.push(arr[i]);
        }
        reverse(vec.begin(),vec.end());
        return vec;
         
    }
