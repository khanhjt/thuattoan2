//Tichpx - Tinh cac F cach ly covid
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,d[100000],F[10000]={},x,y;
	vector<int> A[10000];  //A[1] chua cac phan tu tiep xuc voi 1
	queue<int> Q;
	cin>>n>>m;
	while(m--) 
	{
		cin>>x>>y;
		A[x].push_back(y);
		A[y].push_back(x);
	}
	fill(d,d+n+1,-1);   //for(int i=0;i<=n;i++) d[i]=-1;
	cin>>F[0];
	for(int i=1;i<=F[0];i++)
	{
		cin>>x;
		Q.push(x);
		d[x]=0;
	}
	while(Q.size())
	{
		int u=Q.front(); Q.pop();
		for(auto v:A[u]) 
		if(d[v]==-1)
		{
			d[v]=d[u]+1;
			Q.push(v);
			F[d[v]]++;	
		}
	}
	for(int i=0;F[i]!=0;i++)
	{
		cout<<"\nF"<<i<<" : "<<F[i]<<" : ";
		for(int j=1;j<=n;j++) if(d[j]==i) cout<<j<<" ";
	}
}


