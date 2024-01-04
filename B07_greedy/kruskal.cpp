//Tichpx - thuat toan kruskal
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>> Canh;
#define ts first
#define dau second.first
#define cuoi second.second
int main()
{
	int n,m,x,y,v,w,res=0;
	cin>>n>>m;
	int D[n+5]={};
	Canh A[m+5];
	for(int i=1;i<=m;i++) cin>>A[i].dau>>A[i].cuoi>>A[i].ts;
	sort(A+1,A+m+1);
	for(int i=1;i<=m;i++) 
	{
		x=A[i].dau; // while(D[x]) x=D[x];   
		y=A[i].cuoi;// while(D[y]) y=D[y];
		u=x; while(D[u]) u=D[u];  //tim goc cua x
		v=y; while(D[v]) v=D[v];  //tim goc cua y
		if(x!=y)
		{
			res+=A[i].ts; D[x]=y;
			while(x!=u) {int t=D[x]; D[x]=v; x=t;}
			while(y!=v) {int t=D[y]; D[y]=v; y=t;}
		}  
	}
	cout<<res;
}


