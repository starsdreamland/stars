#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[15];
	for(int i=1;i<=10;i++)
		cin>>a[i];
	int *x=a,*y=a+10+1;
	while(x<=y)
	{
		swap(*x,*y);
		x++;
		y--;
	}
	for(int i=1;i<=10;i++)
		cout<<a[i]<<endl;
	return 0;
}
