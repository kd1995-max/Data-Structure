 void exchangeColumns(vector<vector<int> > &matrix)
    {
        // code here
         int n1=matrix.size();
        int m1=matrix[0].size();
        for(int i=0;i<n1;i++)
        swap(matrix[i][0],matrix[i][m1-1]);
    }
