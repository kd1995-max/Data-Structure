#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max1=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max1<arr[i])
			max1=arr[i];
	}
	int count[max1]={0};
    for(int i=0;i<max1;i++)
	{
		count[arr[i]-1]=1;
	}
	for(int i=0;i<max1;i++)
	{

		if(count[i]==0)
        {
            cout << i + 1 << endl;
            break;
        }
		
	}
	return 0;
}
