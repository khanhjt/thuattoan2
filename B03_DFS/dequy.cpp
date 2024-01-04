//Tichpx
#include<bits/stdc++.h>
using namespace std;

void Path(int s,int f,int *d)
{
	if(s==f) cout<<s;
	else {Path(s,d[f],d); cout<<"->"<<f;}
}

bool dfs(int s,int c, int f, int *d)
{
	if(c==f) {Path(s,f,d); return true;}
	for(int a=1;a*a<=c;a++)
	if(c%a==0)
	{
		int v=(a-1)*(c/a+1);
		if(d[v]==0 and v>=f)
		{
			d[v]=c;
			if(dfs(s,v,f,d)) return true;
		}
	}
	return false;
}
int main()
{
	int s,f;
	cin>>s>>f;
	int d[s+5]={};
	if(!dfs(s,s,f,d)) cout<<"khong di duoc dau ";
}


