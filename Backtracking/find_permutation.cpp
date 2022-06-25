	    1 method :-
  vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<string>permute;
		    do
		    {
		        permute.push_back(S);
		    }
		    while(next_permutation( S.begin(),S.end()) );
		    return permute;
		}
    
    
    2 method :-
    	void permute(string s , int i, vector<string>& vec){
	    if( i == s.length() - 1)
	    {
	        vec.push_back(s);
	        return;
	    }
	    
	    for(int j = i; j < s.size(); j++)
	    {
	        swap(s[i] , s[j]);
	        permute(s , i + 1,vec);
	        swap(s[i],s[j]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int i = 0;
	        vector<string> vec;
	        permute(S , 0 , vec);
	        	        sort(vec.begin() , vec.end());
	        return vec;
		}
