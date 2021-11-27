// Given an array A[] of N positive integers. The task is to find
//  the maximum of j - i subjected to the constraint
//   of A[i] < A[j] and i < j.

#include<bits/stdc++.h>
using namespace std;
int max_diff(vector<int>vec)
{
    int n=vec.size();
    int max_=0;
    for(int i=0;i<n;i++)
    {

       for(int j=i+1;j<n-1;j++)
       {
           if(vec[i]<=vec[j])
            max_ =max(max_,j-i);
       } 
    }
    return max_;

}
 int main()
 {
    vector<int> vec={34,8,10,3,2,80,30,33,1};
    cout<< max_diff(vec);
     return 0;
 } 
