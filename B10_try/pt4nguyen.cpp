//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int M,dem=0;
	cin>>M;
	for(int a=0;a<=M;a++)
	for(int b=0;a+b<=M;b++)
	for(int c=0;a+b+c<=M;c++)
	{
		int d=M-a-b-c;
		cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<M<<"\n";
		dem++;
	}
	cout<<"\n"<<dem;
}


