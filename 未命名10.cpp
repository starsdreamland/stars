#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	a+=b; 
	cout<<a;
	return 0;
}
