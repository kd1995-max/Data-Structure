 string caseSort(string str, int n)
    {
        // your code here
       priority_queue<int,vector<int>,greater<int>>small;
       priority_queue<int,vector<int>,greater<int>>large;
       for(auto e : str)
       {
           if(e>= 'a' && e<='z')// ascii compare
            small.push(e);
           else
            large.push(e);
       }
     string s;
     for(auto e : str)
     {
          if(e>= 'a' && e<='z')
          {// ascii compare
            s.push_back(small.top());
            small.pop();
          }
           else
           {
           s.push_back(large.top());
           large.pop();
           }
     }
     return s;
    }
