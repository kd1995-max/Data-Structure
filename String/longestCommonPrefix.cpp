blic:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
      
      string ans="";
    string a=strs[0];
    string b=strs[strs.size()-1];
        int i=0;
        while(i<a.length())
        {
            if(a[i]==b[i])
            {
                ans.push_back(a[i]);
               i++;  
            }
             else
             {
                 break;
             }
        }
        return ans;
    }
