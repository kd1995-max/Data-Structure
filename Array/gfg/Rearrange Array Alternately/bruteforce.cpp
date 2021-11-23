#include<bits/stdc++.h>
using namespace std;
vector<int> printArray(vector<int>&v)
{
   int n=v.size();
   int l = (n%2 == 0) ? n/2 : n/2 + 1;
   int s=n/2;
   vector<int>v1(s);
   vector<int>v2(l);
   vector<int>vr;
 
   for(int i=0;i<s;i++)
   {
           v1[i]=v[i];
   }
  
   for(int i=s;i < n;i++)
   {
           v2[i-s]=v[i];
   }
  
   reverse(v2.begin(),v2.end());
 
   int i=0,j=0;
 
   for (int k = 0; k < n; k++)
   {
       if(k%2!=0)
       {
           vr.push_back(v1[i]);
           i++;
       }
       else
       {
           vr.push_back(v2[j]);
           j++;
       }
   }
  
 
 
   return vr;
}
int main()
{
 
   //take input in a vector vec
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++)
   {
       cin>>vec[i];
   }
 
   vector<int> vec1 =  printArray(vec);
  
   for(int i=0;i<vec1.size();i++)
   {
       cout<<vec1[i]<<" ";
   }
 
   return 0;
}
//output:
// 5
// 1 2 3 4 5
// 5 1 4 2 3 
