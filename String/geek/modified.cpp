  int modified (string a)
    {
        // Your code here
         int temp_count = 1;
        int res = 0;
        for(int i = 1; i < a.length(); i++)
        {
        
            if(a[i - 1] == a[i])
            {
                temp_count++;
            }
            else
            {
                temp_count = 1;
            }
            
            if(temp_count == 3)
            {
                res++;
                temp_count = 1;
            }
        }

        
        return res;
    }
