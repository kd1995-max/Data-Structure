  vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int>vec;
        int sum_lower=0;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<=i;j++)
           {
               sum_lower +=matrix[i][j];
           }
        }
        int sum_upper=0;
        for(int i=0;i<n;i++)
        {
           for(int j=n-1;j>=i;j--) 
           {
               sum_upper +=matrix[i][j];
           }
        }
        vec.push_back(sum_upper);
        vec.push_back(sum_lower);
        return vec;
    }
