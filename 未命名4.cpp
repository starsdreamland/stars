#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	if(m<=n)	
		swap(m,n);
	int o;
	if(m%n==0)
		o=m; 
	else
		o=m*n;
	while(n!=0)
	{
		int x=n;
		n=m%n;
		m=x;
	}
	cout<<m<<" "<<o;
	return 0;
 } 
