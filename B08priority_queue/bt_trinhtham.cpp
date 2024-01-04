//Tichpx - TRinh tham  - deque
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	cin>>n>>k;
	deque< pair<int,int> > Q;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(Q.size() and Q.back().first<=x) Q.pop_back();
		Q.push_back({x,i});
		while(i-Q.front().second>=k) Q.pop_front();
		if(i>=k) cout<<Q.front().first<<" ";
	}
}


