   mathod 1:-
    void reverse(string &str,int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
    string reverseWords(string S) 
    { 
        // code here 
        int start = 0 , end = 0 ; 
        for(end = 0; end < S.length(); end++)
        {
            if(S[end] == '.')
            {
                reverse(S , start , end - 1);
                start = end + 1;
            }
        }
        
        reverse(S , start , S.length() - 1);
        reverse(S , 0 , S.length() - 1);
        return S;
    } 
method 2:
string reverseWords(string S) 
    { 
        string cpy = S;
        
        cpy.push_back('.');
        
        stack<string> st;
        
        int len = 0;
        int idx = 0;
        for(int i = 0; i < cpy.length();i++)
        {
            
            if(cpy[i] == '.')
            {
                st.push(cpy.substr(idx , len));
                len = 0;
                idx = i + 1;
            }
            
            len++;
        }
        
        string str = "";
        
        while(!st.empty())
        {
            str += st.top();
            st.pop();
        }
        
        return str;
    }
