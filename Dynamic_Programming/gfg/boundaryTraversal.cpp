    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
       vector<int> vec;
       
       for(int i=0;i<m;i++)
       {
           vec.push_back(matrix[0][i]);
       }
       if(n==1)
       return vec;
       
      for(int i=1;i<n;i++)
      {
          vec.push_back(matrix[i][m-1]);
      }
      if(m==1)
      return vec;
      
      for(int i=m-2;i>=0;i--)
      {
          vec.push_back(matrix[n-1][i]);
      }
      for(int i=n-2;i>=1;i--)
      {
          vec.push_back(matrix[i][0]);
      }
       return vec; 
    }
