 string findSum(string str1, string str2) {
        // Your code goes here
        if(str1.length()> str2.length())
            swap(str1,str2);
            
        int n1=str1.length();
        int n2=str2.length();
        int diff=n2-n1;
        int carry=0;
        string res_str="";
        
        for(int i=n1-1;i>=0;i--)
        {
            int sum=((str1[i]-'0')+str2[i+diff]-'0')+carry;
            res_str.push_back(sum%10+'0');
            carry=sum/10;
        }
        for(int i=diff-1;i>=0;i--)
        {
            int sum=(str2[i]-'0')+carry;
            res_str.push_back(sum%10+'0');
            carry=sum/10;
        }
        if(carry)
            res_str.push_back(carry+'0');
        reverse(res_str.begin(),res_str.end());
         
        int i=0;
        while(res_str[i]=='0')
        {
            i++;
            if(res_str[i]!='0')
            break;
        }
        
        string final="";
        
        if(i==res_str.length())
        final.push_back('0');
        
        for(;i<res_str.length();i++)
        {
            final.push_back(res_str[i]);
        }
        return final;
    }
