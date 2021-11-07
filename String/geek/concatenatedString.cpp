  string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        
        int count_s1[256]={0};
        int count_s2[256]={0};
        string str="";
        for(int i=0;i<s1.length();i++)
        {
            count_s1[s1[i]]++;
        }
         for(int i=0;i<s2.length();i++)
        {
            count_s2[s2[i]]++;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(count_s2[s1[i]]==0)
            str +=s1[i];
        }
         for(int i=0;i<s2.length();i++)
        {
            if(count_s1[s2[i]]==0)
            str +=s2[i];
        }
        
        return (str=="")?"-1":str;
    }
