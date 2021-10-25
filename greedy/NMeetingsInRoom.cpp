 /*   static bool mycmp(pair<int,int>a,pair<int,int>b)
    {
        return (a.second<b.second);
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        pair<int,int> a[n];
        for(int i=0;i<n;i++)
        {
            a[i]={start[i],end[i]};
        }
        sort(a,a+n,mycmp);
        int prev=0;
        int res=1;
        for(int curr=1;curr<n;curr++)
        {
            if(a[curr].first>=a[prev].second)
            {
                res++;
                prev=curr;
            }
        }
        return res;
    }  */
      static bool myCmp(pair<int,int>p1,pair<int,int>p2){
      
       return p2.second>p1.second;
   }

    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vec;
        
       for(int i=0;i<n;i++){
           pair<int,int>p;
           p.first= start[i];
           p.second=end[i];
           vec.push_back(p);
       }
        
        sort(vec.begin() , vec.end() , myCmp);
        
        int prev = 0;
        int res = 1;
        
        for(int curr = 1; curr < n; curr++)
        {
            if(vec[curr].first > vec[prev].second)
            {
                res++;
                prev = curr;
            }
        }
        
        return res;
    }
