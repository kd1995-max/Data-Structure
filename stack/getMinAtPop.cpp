stack<int> _push(int arr[],int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }
    return s;
}
 
 
void _getMinAtPop(stack<int>s)
{
 
    stack<int> aux1;
    while (!s.empty())
    {
        int min = INT_MAX;
        aux1 = s;
        while(!aux1.empty()){
            if(aux1.top() < min)
                min = aux1.top();
                aux1.pop();
        }
        cout << min << " ";
        s.pop();
    }
}
