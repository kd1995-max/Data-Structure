void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size()>=n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
    return 	s.empty();
	
}

int pop(stack<int>& s){
	// Your code goes here
	int x=-1;
	if(!s.empty())
	{
	    x=s.top();
	    s.pop();
	}
	return x;
 
}

int getMin(stack<int>& s){
	// Your code goes here
	int mn=99999;
	
	stack<int> st(s);
	while(!st.empty())
	{
	    mn=min(st.top(),mn);
	    st.pop();
	}
	return mn;
	
}
