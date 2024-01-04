//Tichpx
#include<bits/stdc++.h>
using namespace std;
void induong(int s,int f,int *d)
{
	stack<int> S;
	while(f!=s)
	{
		S.push(f);
		f=d[f];
	}	
	cout<<s;
	while(S.size())
	{
		cout<<"->"<<S.top();
		S.pop();
	}
}
void Path(int s,int f,int *d)
{
	if(s==f) cout<<s;
	else {Path(s,d[f],d); cout<<"->"<<f;}
}
void dfs(int s,int f)  //di sau bao nhieu buoc
{
	stack<int> S;
	int d[s+5]={};  //mang cha
	S.push(s);
	d[s]=-1;
	while(S.size()>0)  //while(not S.empty())
	{
		int u=S.top();  S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(d[v]==0 && v>=f) {d[v]=u; S.push(v);}
			if(d[f]>0) 
			{
				cout<<"co duong di : ";
				Path(s,f,d);//induong(s,f,d);
				return;
			}
		}
	}
	cout<<"khong co duong di";
}
int main()
{
	int s,f;
	cin>>s>>f;
	dfs(s,f);
}


