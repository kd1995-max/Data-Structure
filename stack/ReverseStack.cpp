void solve(stack<int> st, vector<int> &ans,queue<int> &q)
{
    if(st.empty())
    return ;
    int x=st.top();
    st.pop();
    q.push(x);
    solve(st,ans,q);
    
    int a=q.front();
    q.pop();
    ans.push_back(a);
}
    vector<int> Reverse(stack<int> st){
      vector<int>  ans;
      queue<int> q;
      solve(st,ans,q);
      
      return ans;
    }
