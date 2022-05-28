  int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        int a,b;
        while(s.size()>1)
        {
            a=s.top();
            s.pop();
            
            b=s.top();
            s.pop();
            
            if(M[a][b])
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int potential= s.top();
        
        for(int i=0;i<n;i++)
        {
            if(i==potential)
            continue;
            if(M[potential][i]==1)
                return -1;
            if(M[i][potential]!=1)
                return -1;
        }
        return potential;
    }
