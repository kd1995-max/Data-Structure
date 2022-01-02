	int find_median(vector<int> v)
		{
		    // Code here.
		    int res=0;
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(n%2!=0)
		    {
		        res= v[n/2];
		    }
		    else
		    {
		        res=((v[n/2])+(v[n/2-1]))/2;
		    }
		   // res=v[res];
		    return res;
		}
