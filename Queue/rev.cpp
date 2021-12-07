void rev_(queue<int> &q)
{
    if(q.empty())
        return;
    int x=q.front();
    q.pop();
    rev_(q);
    q.push(x);
    
}

queue<int> rev(queue<int> que)
{
    // add code here.
    rev_(que);y
    return que;
    
}
