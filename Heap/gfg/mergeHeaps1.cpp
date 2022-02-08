  void heapify(vector<int> &v,int i,int n)
    {
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        
        if(l<n && v[l]> v[largest])
            largest=l;
        if(r<n && v[r]> v[largest])
            largest=r;
            
        if(largest !=i)
        {
            swap(v[i],v[largest]);
            heapify(v,largest,n);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> vec;
        for(int i=0;i<n;i++)
        vec.push_back(a[i]);
        
        for(int i=0;i<m;i++)
        vec.push_back(b[i]);
        
        int x=m+n;
        
        for(int i=(x/2)-1;i>=0;i--)
        heapify(vec,i,x);
        return vec;
        
    }
