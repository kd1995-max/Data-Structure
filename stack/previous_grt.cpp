vector <int> calspan(int price[],int n)
{
	vector <int> vec;
	stack<int> s;
	vec.push_back(-1);
	s.push(0);
	for(int i=1;i<n;i++)
	{
		while(!s.empty() && price[s.top()]<=price[i])
		s.pop();
		
		int grt=s.empty()?-1:price[s.top()];
		
		vec.push_back(grt);
		s.push(i);
	}
		return vec;
	
}
