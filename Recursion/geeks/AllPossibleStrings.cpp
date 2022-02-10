	void powerSet(string s,vector<string> &v,int i,string curr)
	{
	    if(i==s.length())
	    {
	        v.push_back(curr);
	        return;
	    }
	     powerSet(s,v,i+1,curr+s[i]);
	    powerSet(s,v,i+1,curr);
	   
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		   vector<string>ans;
		   powerSet(s,ans,0,"");
		   sort(ans.begin(),ans.end());
		   ans.erase(ans.begin());
		   return ans;
		}
