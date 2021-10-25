 vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        
        priority_queue<int,vector<int>,greater<int>>p;
        vector<int>v;
        for(int i=0;i<num;i++)
        {
            p.push(arr[i]);
            if(p.size()>K)
            {
                v.push_back(p.top());
                p.pop();
            }
        }
        while(!p.empty())
        {
            v.push_back(p.top());
            p.pop();
        }
        return v;
    }
//arr[] = {6,5,3,2,8,10,9}
//Output: 2 3 5 6 8 9 10
