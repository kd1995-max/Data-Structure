void insertAtCorrectPosition(int x,stack<int> &st)
{
    if(st.size()==0 or st.top() <x)
    {
        st.push(x);
    }
    else
    {
        int a=st.top();
        st.pop();
        insertAtCorrectPosition(x,st);
        st.push(a);
    }
}
void reverse(stack<int> &st)
{
    if(st.size()>0)
    {
        int x=st.top();
        st.pop();
        reverse(st);
        insertAtCorrectPosition(x,st);
    }
}
void SortedStack :: sort()
{
   //Your code here
   reverse(s);
   
}
