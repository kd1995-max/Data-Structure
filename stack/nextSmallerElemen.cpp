#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
      vector<int> vec(n);
       stack<int> s;
        vec[n-1]=-1;
        s.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && s.top()>=arr[i])
                s.pop();
            int Nxtsr=s.empty()?-1:s.top();
            vec[i]=Nxtsr;
            s.push(arr[i]);
        }
    return vec;
}
