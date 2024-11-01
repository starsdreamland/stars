#include<iostream>
#include<algorithm>
using namespace std;
int jisuan(int x)
{
	int y=1;
	for(int i=1;i<=x;i++)
		y*=i;
	return y;
}
int main()
{
	int Sn=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
		Sn+=jisuan(i);
	cout<<Sn;
	return 0;
}
