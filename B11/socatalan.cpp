//Tichpx - catalan
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long a[n+5]={0,1,1};
	for(int i=3;i<=n;i++)
	{
		for(int j=1;j<i;j++) a[i]+=a[j]*a[i-j];
	//	cout<<a[i]<<" ";
	}
	cout<<a[n];
}


