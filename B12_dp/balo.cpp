//Tichpx - sap xep ba lo khong lap
#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],C[100][1005]={},n,M;
void Trace(int n,int M)
{
	if(C[n][M]>0)
	{
		while(C[n][M]==C[n-1][M]) n--;
		Trace(n-1,M-a[n]);
		cout<<"Chon do vat kt "<<a[n]<<" gt "<<b[n]<<"\n";
	}
}
int main()
{
	cin>>n>>M;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=M;j++) C[i][j]=a[i]>j?C[i-1][j]:max(C[i-1][j],b[i]+C[i-1][j-a[i]]);
	cout<<"\nTong gt lon nhat "<<C[n][M]<<"\n";
	Trace(n,M);
}


