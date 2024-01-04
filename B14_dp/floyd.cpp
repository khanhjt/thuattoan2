//Tichpx - Floyd co phan truy vet
#include<bits/stdc++.h>
using namespace std;
int C[102][102],P[105][105]={};
void trace(int u,int v)
{
	if(P[u][v]==0) cout<<u<<"->";
	else	{trace(u,P[u][v]);trace(P[u][v],v);}
}
int main()
{
	int n,m,u,v,w;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) C[i][j]=i==j?0:1e9;
	for(int i=1;i<=m;i++) 
	{
		cin>>u>>v>>w;
		C[u][v]=w;
	}
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) if(C[i][j]>C[i][k]+C[k][j]) { C[i][j]=C[i][k]+C[k][j]; P[i][j]=k;}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(i!=j) 
	{
		if(C[i][j]==1e9) cout<<"\n"<<i<<" : "<<j<<" khong di duoc";
		else 
		{
			cout<<"\n"<<i<<" : "<<j<<" dai "<<C[i][j]<<" nhu sau ";
			trace(i,j); 
			cout<<j;
		}
	}
}


