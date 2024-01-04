//Tichpx  - phan vung anh (so 0 la anh, so 1 la nen) dem vung so 0 voi lang gieng 8
#include<bits/stdc++.h>
using namespace std;
struct anh
{
	int n,m,a[100][100],k=0,d[1000]={};   //k- so vung, d[i] so so 0 o vung thu i
	void nhap()
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) cin>>a[i][j];
		for(int i=0;i<=n+1;i++) a[i][0]=a[i][m+1]=1;
		for(int j=0;j<=m+1;j++) a[0][j]=a[n+1][j]=1; 
	}
	void dfs(int u,int v)
	{
		d[k]++; 
		a[u][v]=1;
		for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++) if(a[u+i][v+j]==0) dfs(u+i,v+j);		
	}
	void sol()
	{
		nhap();
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		if(a[i][j]==0) {k++;dfs(i,j);}
		cout<<"\nSo vung  "<<k<<"\n";
		sort(d+1,d+k+1);
		for(int i=1;i<=k;i++) cout<<d[i]<<" ";
	}
};
int main()
{
	anh A;
	freopen("anh.txt","r",stdin);
	A.sol();
}


