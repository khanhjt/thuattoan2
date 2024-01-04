//Tichpx - noi thanh kim loai
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,res=0;
	priority_queue<int,vector<int>,greater<int>>Q;
	cin>>n;
	while(n--) {cin>>x;Q.push(x);}
	while(Q.size()>1)
	{
		x=Q.top(); Q.pop();
		x+=Q.top(); Q.pop();
		Q.push(x);
		res+=x;
	}
	cout<<res;
}


