//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5],res=0;
	for(int i=n;i>=1;i--) cin>>a[i];
	int M=a[1];
	for(int i=2;i<=n;i++) 
	{
		if(M>a[i]) res+=M-a[i];
		else M=a[i];
	}
	cout<<res;
}


