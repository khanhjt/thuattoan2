//Tichpx - trinh tham - Priority_queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	priority_queue< pair<int,int> > Q;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x; 
		while(Q.size() && i-Q.top().second>=k) Q.pop();
		Q.push({x,i});
		if (i>=k) cout<<Q.top().first<<" ";
	}
}


