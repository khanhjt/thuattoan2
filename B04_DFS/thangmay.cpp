//Tichpx - thang may
#include<bits/stdc++.h>
using namespace std;
void sol()
{
	int n,s,f,m,k;
	cin>>n>>m>>k>>s>>f;
	queue<int> Q;
	int d[n+5]={};  //toan 0
	Q.push(s);
	d[s]=1;
	while(Q.size() && d[f]==0)
	{
		int u=Q.front(); Q.pop();
		if(u+m<=n && d[u+m]==0) {d[u+m]=d[u]+1; Q.push(u+m);}
		if(u-k>=1 && d[u-k]==0) {d[u-k]=d[u]+1; Q.push(u-k);}
	}
	cout<<d[f]-1<<"\n";
}
int main()
{
	int test; cin>>test; while(test--) sol();
}


