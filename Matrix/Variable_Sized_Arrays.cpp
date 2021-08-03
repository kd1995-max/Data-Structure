#include <iostream>
using namespace std;

int main() {
	int m=3,n=2;
	int arr[m][n];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			arr[i][j]=i+j;
		}
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	return 0;
}
//output:0 1 1 2 2 3 
