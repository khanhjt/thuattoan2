//Tichpx - doi tien tren trang lap trinh online
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,C[10005]={},M,t;
	cin>>n;
	for(int j=1;j<=1e4;j++) C[j]=1e9;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		for(int j=a;j<=1e4;j++) C[j]=min(C[j],1+C[j-a]);
	}
	cin>>t;
	while(t--) {cin>>M; cout<<C[M]<<"\n";}
}


