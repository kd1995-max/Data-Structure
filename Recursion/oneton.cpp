#include <iostream>
using namespace std;

void nto1(int n)
{
	if(n==0)
	return;
	nto1(n-1);
	cout<<n;
}
int main() {
	int n=5;
	nto1(n);
	return 0;
}
//output:-12345
