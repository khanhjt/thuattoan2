//Tichpx
#include<bits/stdc++.h>
using namespace std;
struct Money
{
	int a[100],C[100][1000]={},n,M;
	void sol()
	{
		cin>>n>>M;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int j=1;j<=M;j++) C[0][j]=1e9;
		for(int i=1;i<=n;i++) 
			for(int j=1;j<=M;j++)
			C[i][j]=a[i]>j?C[i-1][j]:min(C[i-1][j],1+C[i][j-a[i]]);
		if(C[n][M]==1e9) cout<<"khong doi duoc";
		else 
		{
			cout<<"so to "<<C[n][M]<<"\n";
			Trace(n,M);
		}
	}
	void Trace(int n,int M)
	{
		if(C[n][M]>0)
		{
			while(C[n][M]==C[n-1][M]) n--;
			Trace(n,M-a[n]);
			cout<<a[n]<<" ";
		}
	}
};
int main(){Money M; M.sol();}


