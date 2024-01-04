//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> Water;
map<Water,Water> M;
void Path(Water x)
{
	if(x.first==0 &&x.second==0) cout<<"(0,0)";
	else {Path(M[x]);cout<<"->("<<x.first<<","<<x.second<<")";}
}
void BFS(int n,int m,int k)
{
	queue<Water> Q;
	Q.push({0,0});
	M[{0,0}]={-1,-1};
	while(Q.size())
	{
		Water u=Q.front();
		Q.pop();
		int x=u.first,y=u.second,t=x+y;
		Water Next[]={{0,y},{n,y},{x,0},{x,m},{max(0,t-m),min(t,m)},{min(t,n),max(0,t-n)}};
		for(auto v:Next)
		if(M.find(v)==M.end())
		{
			M[v]=u;
			Q.push(v);
			if(v.first==k or v.second==k) {Path(v);return;}
		}
	}
	cout<<"\nKhong dong duoc nuoc";
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	BFS(n,m,k);
}


