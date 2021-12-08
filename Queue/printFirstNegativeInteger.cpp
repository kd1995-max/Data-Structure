
typedef long long int lli;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        
    queue<lli>q;
    vector<lli>v;
    
    for(lli i=0;i<K;i++)
    {
        if(A[i]<0)
            q.push(A[i]);
    }
    
     if(q.size()==0)
        v.push_back(0);
     else
     v.push_back(q.front());
     
     lli l=0;
     lli r=K;
     while(r<N)
     {
         if(q.front()==A[l])
             q.pop();
         l++;
         
         if(A[r]<0)
            q.push(A[r]);
           
          if(q.size()==0)
            v.push_back(0);
        else
            v.push_back(q.front());
        r++;
     }
      return v;                                           
 }
