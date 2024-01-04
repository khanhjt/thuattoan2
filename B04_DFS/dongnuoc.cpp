//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> Water;
int BFS(int n,int m,int k)
{
	queue<Water> Q;
	map<Water,int> M;
	Q.push({0,0});
	M[{0,0}]=0;
	while(Q.size())
	{
		Water u=Q.front();
		Q.pop();
		int x=u.first,y=u.second,t=x+y;
		Water Next[]={{0,y},{n,y},{x,0},{x,m},{max(0,t-m),min(t,m)},{min(t,n),max(0,t-n)}};
		for(auto v:Next)
		if(M.find(v)==M.end())
		{
			M[v]=M[u]+1;
			Q.push(v);
			if(v.first==k or v.second==k) return M[v];
		}
	}
	return -1;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int res=BFS(n,m,k);
	if(res==-1) cout<<"khong dong duoc nuoc";
	else cout<<"\nSo buoc it nhat "<<res;
}


