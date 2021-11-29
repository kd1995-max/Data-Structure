   vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>vec;
        for(int i=0;i<matrix.size();i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<matrix.size();j++)
                    vec.push_back(matrix[i][j]);
            }
            else
            {
                for(int j=matrix.size()-1;j>=0;j--)
                    vec.push_back(matrix[i][j]);
            }
        }
        return vec;
    }
