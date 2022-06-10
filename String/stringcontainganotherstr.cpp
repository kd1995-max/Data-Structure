#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s1,s2;
	cin>>s1>>s2;
	string res;
	cin>>res;
	
	int l1=s1.length();
	int l2=s2.length();
	int lr=res.length();
	
	if((l1+l2)!=lr)
	cout<<"no";
	else
	{
		int i=0,j=0,k=0;
		while(k<lr)
		{
			if(i<l1 and s1[i]==res[k])
			i++;
			else if(j<l2 and s2[j]==res[k])
			j++;
			else
			break;
			k++;
		}
		if(i<l1 or j<l2)
		cout<< "no";
		else
		cout<<"yes";
	}
}
int main() {
	// your code goes here
	solve();
	
	return 0;
}
