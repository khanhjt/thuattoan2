//Tichpx
#include<bits/stdc++.h>
using namespace std;
bool DFS(int s,int f)  //di duoc hay khong
{
	stack<int> S;
	//vector<bool> d(s+5,false);
	bool d[s+5]={};
	S.push(s);
	d[s]=true;
	while(S.size()>0)  //while(not S.empty())
	{
		int u=S.top();  S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(d[v]==0 && v>=f) {d[v]=1; S.push(v);}
			if(d[f]==true) return true;
		}
	}
	return false;
}
int dfs(int s,int f)  //di sau bao nhieu buoc
{
	queue<int> S;
	//vector<bool> d(s+5,false);
	int d[s+5]={};  //do do sau ban dau danh dong toan 0
	S.push(s);
	d[s]=1;
	while(S.size()>0)  //while(not S.empty())
	{
		int u=S.front();  S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(d[v]==0 && v>=f) {d[v]=d[u]+1; S.push(v);}
			if(d[f]>0) return d[v]-1;
		}
	}
	return -1;
}
int main()
{
	int s,f;
	cin>>s>>f;
//	if(DFS(s,f)) cout<<"co duong di";
//	else cout<<"khong co duong di";
	cout<<dfs(s,f);
}


