#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	for(int i=100;i<1000;i++)
	{
		int a=i%10;
		int b=(i/10)%10;
		int c=i/100;
		if(i==pow(a,3)+pow(b,3)+pow(c,3))
			cout<<i<<endl;
	}
	return 0;
}
