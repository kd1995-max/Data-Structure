 string removeConsecutiveCharacter(string str)
    {
        // code here.
        string res;
        res.push_back(str[0]);
        int count=0;
        int n=str.length();
        for(int i=1;i<n;i++)
        {
            if(res[count]!=str[i])
            {
                //res+=str[i];
             res.push_back(str[i]);
                count++;
            }
        }
      return res;  
    }
