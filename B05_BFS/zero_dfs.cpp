//Tichpx - DFS de quy moi con duong ve 0
#include<bits/stdc++.h>
using namespace std;

bool dfs(int s,int f)
{
	if(s==f) return true;
	if(s<f) return false;
	for(int a=1;a*a<=s;a++)
	if(s%a==0 and dfs((a-1)*(s/a+1),f)) return true;
	return false;
}

int main()
{
	int s,f;
	cin>>s>>f;
	if(dfs(s,f)) cout<<"di duoc";
	else cout<<"ko di duoc";
}


