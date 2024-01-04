//Tichpx - buon dua le
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,x,s=0,t;
	queue<int> Q;
	cin>>n>>k>>m;
	for(int i=1;i<n+k;i++)
	{
		if(i<=n) cin>>x; else x=0;
		Q.push(x);
		if(Q.size()>k) Q.pop();
		t=0;
		while(Q.size() && Q.front()+t<=m) {t+=Q.front(); Q.pop();}
		if(Q.size()) {Q.front()-=m-t;t=m;}
		s+=t;
	}
	cout<<s;
	
}


