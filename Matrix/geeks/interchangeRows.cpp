 void interchangeRows(vector<vector<int> > &matrix)
    {
        // code here 
        int n1=matrix.size(); //row
     //   int m1=matrix[0].size(); //column
        for(int i=0;i<n1/2;i++)
        {
            swap(matrix[i],matrix[n1-1-i]);
        }
    }
