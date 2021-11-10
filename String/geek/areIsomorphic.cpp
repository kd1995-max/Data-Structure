bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int arr1[256]={0};
        int arr2[256]={0};
        
        if(str1.length()!=str2.length())
        {
            return false;
        }
        
        for(int i=0;i<str1.length();i++)
        {
            
            arr1[str1[i]]++;
            arr2[str2[i]]++;
            
            if(arr1[str1[i]]!=arr2[str2[i]]) //frequency
            return false;
            
        }
        return true;   
    }
