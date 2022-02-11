void SortedStack :: sort()
{
   //Your code here
   vector<int>vec;
   while(!s.empty())
  {
       vec.push_back(s.top());
       s.pop();
   }
  std :: sort(vec.begin(),vec.end());

    for(auto e : vec)
    s.push(e);
}
