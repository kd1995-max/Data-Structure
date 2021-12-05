vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>vec;
		    sort(S.begin(),S.end());
		    vec.push_back(S);
		    while(next_permutation(S.begin(),S.end()))
		    {
		        vec.push_back(S);
		    }
		    return vec;
		}
