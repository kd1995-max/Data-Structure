   string caseSort(string str, int n)
    {
        // your code here
        vector<char>vec1;
        vector<char>vec2;
        string s ="";
        int k=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                vec1.push_back(str[i]);
    
            }
            else
            {
                vec2.push_back(str[i]);
            }
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        for(int i=0;i<n;i++)
        {
            
            if(str[i]>=65 && str[i]<=90)
            {
                s +=vec1[k];
                k++;
            }
            else
            {
                s +=vec2[l];
                l++;
            }
            
        }
        return s;
        
    }
