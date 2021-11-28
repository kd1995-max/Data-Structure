 vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        
        vector<vector<int>> res;
        if(n==1)
        return res;
        int i=0,j=0;
        while(i<n-1)
        {
            vector<int>vec;
            while(i<n-1 && A[i]>=A[i+1])
            i++;
            if(i==n-1)
            break;
            int b=i;
            vec.push_back(b);
            i++;
            while(i<n && A[i]>A[i-1])
            i++;
            int s=i-1;
            vec.push_back(s);
            res.push_back(vec);
            
        }
        return res;
    }
