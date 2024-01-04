//Tichpx
#include<bits/stdc++.h>
//#include<algorithm>  //partial_sum()
using namespace std;
int main()
{
	int n,m,L,R;
	cin>>n>>m;
	int a[n+5]={};
	for(int i=1;i<=n;i++) {cin>>a[i]; a[i]+=a[i-1];}
	while(m--)
	{
		cin>>L>>R;
		cout<<a[R]-a[L-1]<<" ";
	}
}


