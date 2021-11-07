 char firstRep (string s)
    {
        //code here.
        int count[CHAR]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(count[s[i]]>1)
            return s[i];
        }
      
        return '#';
        
    }
