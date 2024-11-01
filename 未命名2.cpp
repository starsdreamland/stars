#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[3];
	for(int i=0;i<3;i++)
		cin>>a[i];
	int x=sizeof(a)/sizeof(a[0]);
	sort(a,a+x);
	cout<<a[2];
	return 0;
 } 
