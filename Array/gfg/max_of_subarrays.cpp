    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int>dq;
        vector<int>vec;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && dq.back()<arr[i])
            dq.pop_back();
            
            dq.push_back(arr[i]);
        }
        vec.push_back(dq.front());
        int l=0,r=k-1;
        while(1)
        {
            if(dq.front()==arr[l])
                dq.pop_front();
                l++;
                r++;
                
                if(r==n) break;
                
                while(!dq.empty() && dq.back()<arr[r])
                    dq.pop_back();
                    
                dq.push_back(arr[r]);
                vec.push_back(dq.front());
        }
        return vec;
        
    }
