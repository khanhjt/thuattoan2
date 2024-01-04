//Tichpx - bup be nga
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s=0;
	cin>>n>>k;
	int a[n];
	for(auto &x:a) cin>>x;
	sort(a,a+n,greater<int>());
	queue<int> Q;
	for(auto x:a)
	{
		Q.push(x);
		if(x+k<=Q.front()) Q.pop();
		else s+=x;
	}
	cout<<Q.size()<<" "<<s;
}


