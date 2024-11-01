#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
	int a[10],n;
	for(int i=0;i<9;i++)
		cin>>a[i];
	cin>>n;
	a[9]=n;
	sort(a,a+10);
	for(int i=0;i<=9;i++)
		cout<<a[i]<<endl;
    return 0;
}
