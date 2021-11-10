 bool search(string pat, string txt) 
    { 
    	
    	// Your code here
    	int m=txt.length();
    	int n=pat.length();
    	for(int i=0;i<=m-n;i++)
    	{
    	    bool flag=true;
    	    for(int j=0;j<n;j++)
    	    {
    	        if(pat[j]!=txt[j+i])
    	        {
    	            flag=false;
    	            break;
    	        }
    	    }
    	    if(flag==true)
    	    return true;
    	}
    	return false;
    	
    }
