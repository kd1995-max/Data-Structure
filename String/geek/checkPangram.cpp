  bool checkPangram (string &str) {
        // your code here
        transform(str.begin(),str.end(),str.begin(),::tolower);
        bool present[26]={false};
        for(auto x :str)
        {
            if(isalpha(x))
            {
                present[x-'a']=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(present[i]==0)
            return 0;
        }
        return 1;
    }
