#include<bits/stdc++.h>
using namespace std;

int strvalid(string &str)
{
    int c=0,count=0,res=0;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
            c++;
       else
            count++;
        if(c==count)
            res++;
    } 
    if(c != count)
    return -1;
    
    return res;
}

int main(int argc, char const  *argv[])
{
    
    string str = "0100110101";
    cout<< "substring is " << strvalid(str) <<endl;
    return 0;
}
//  o/p:- substring is 4
