#include<bits/stdc++.h>
using namespace std;

void inorder(int arr[], vector<int> & vec ,int n,int index)
{
	if(index >=n)
	return;
	inorder(arr,vec,n,2*index+1);
	vec.push_back(arr[index]);
	inorder(arr,vec,n,2*index+2);

}

int minswap(vector<int> &vec)
{
	vector<pair<int,int>>vp(vec.size());
	int res=0;
	for(int i=0;i<vp.size();i++)
	{
	vp[i].first=vec[i],vp[i].second=i;
	}
	sort(vp.begin(),vp.end());

	for(int i=0;i<vp.size();i++)
	{
		if(i==vp[i].second)
			continue;
		else
		{
		swap(vp[i],vp[vp[i].second]);
		}
		if(i != vp[i].second)
			--i;
		res++;
	}
	return res;
}
int main()
{
	int arr[]={5,6,7,8,9,10,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> vec;
	inorder(arr,vec,n,0);
	cout<<minswap(vec)<<endl;
}

//3
