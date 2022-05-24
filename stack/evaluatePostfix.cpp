 int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        int res,x,y;
        for(auto a : S)
        {
            if(isdigit(a))
            st.push(a-'0'); //char change into number
        else
        {
            if(!st.empty())
           x=0;
            x=st.top();
            st.pop();
           y = 0;
            y=st.top();
            st.pop();
            
            if(a =='+') res = x+y;
            if(a == '*') res = x*y;
            if(a == '/')
            {
                if(y != 0)
                res=(int)(y/x);
                else
                res=0;
            }
            if(a =='-') res=y-x;
            st.push(res);
        }
    }
        return st.top();
    }
