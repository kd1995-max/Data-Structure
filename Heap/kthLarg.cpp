#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v,int k)
{
   vector<int>vec;
   int len=0;
   for(int i=0;i<v.size();i++)
   {
       int sum=v[i];
       vec.push_back(sum);
       len++;
       for(int j=i+1;j<v.size();j++)
       {
           len++;
           sum +=v[j];
           vec.push_back(sum);
       }
   } 
   sort(vec.begin(),vec.end());
   return vec[len-k];
}
int main(int argc,char const *argv[])
{
    int n,k;
    cin>>n>>k;
    vector<int>v (n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<solve(v,k)<<endl;                               
    return 0;
}
//o/p:-
// 3
// 3 
// 20 -5 -1
// 14
