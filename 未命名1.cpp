#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	int x=sizeof(a)/sizeof(a[0]);
	sort(a,a+x);
	for(int i=0;i<10;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
 } 
