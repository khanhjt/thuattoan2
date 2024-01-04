//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,res=1,x,y,u,v;
	cin>>n>>m;
	int D[n+5]={},F[n+5];
	fill(F,F+n+1,1);       
	k=n;  
	while(m--)
	{
		cin>>x>>y;
		u=x; while(D[u]) u=D[u];  //tim goc cua x
		v=y; while(D[v]) v=D[v];  //tim goc cua y
		if(u!=v)
		{
			D[u]=v;
			F[v]+=F[u];
			k--;
			res=max(res,F[v]);
		//	while(x!=u) {int t=D[x]; D[x]=v; x=t;}
		//	while(y!=v) {int t=D[y]; D[y]=v; y=t;}
		}
	}
	cout<<k<<"\n"<<res;
}


