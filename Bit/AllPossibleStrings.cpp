	vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> str;
		    int n=s.length();
		    
		    for(int i=0;i<(1<<n);i++)
		    {
		        string res="";
		        for(int j=0;j<n;j++)
		        {
		            if(i & (1<<j))
		            res +=s[j];
		        }
		    
		    if(res !="")
		        str.push_back(res);
		    }
		    sort(str.begin(),str.end());
		    return str;
		}
