//Tichpx - DFS mecung
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

class mecung
{
	int n,m,a[100][100],sx,sy,fx,fy;
	public:
	void nhap()
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) cin>>a[i][j];
		cin>>sx>>sy>>fx>>fy;
	}
	void read(string fname)
	{
		ifstream fin(fname);   //Mo file trong C++11 de doc
		fin>>n>>m;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) fin>>a[i][j];
		fin>>sx>>sy>>fx>>fy;
		fin.close();
	}
	void xuat()
	{
		for(int i=1;i<=n;i++)
		{
			cout<<endl;
			for(int j=1;j<=m;j++) cout<<a[i][j]<<" ";
		}
	}
	void rao()
	{
		for(int i=0;i<=n+1;i++) a[i][0]=a[i][m+1]=1;  //cot dau va cuoi toan 1
		for(int j=0;j<=m+1;j++) a[0][j]=a[n+1][j]=1;  //hang dau va cuoi toan 1
	}
	bool dfs()
	{
		stack<pii> S;
		S.push({sx,sy}); a[sx][sy]=1;
		while(S.size())
		{
			pii u=S.top();
			int x=u.first,y=u.second;
			S.pop();
			pii Next[]={{x-1,y},{x+1,y},{x,y-1},{x,y+1}};
			for(pii v:Next)
			if(a[v.first][v.second]==0)
			{
				S.push(v);
				a[v.first][v.second]=1;
			}
			if(a[fx][fy]!=0) return true;
		}
		return false;
	}
	int bfs(int xx,int yy)  //dem so o loang duoc
	{
		queue<pii> S;
		S.push({xx,yy}); a[xx][yy]=1;
		int dem=1;
		while(S.size())
		{
			pii u=S.front();
			int x=u.first,y=u.second;
			S.pop();
			pii Next[]={{x-1,y},{x+1,y},{x,y-1},{x,y+1}};
			for(pii v:Next)
			if(a[v.first][v.second]==0)
			{
				S.push(v);
				a[v.first][v.second]=1;
				dem++;
			}
		}
		return dem;
	}
	void sol()
	{
		read("mc.txt");
		//freopen("mc.txt","r",stdin);
		//nhap();
		xuat();
		rao();
		//bool ok=dfs();
		//cout<<(ok?"di duoc":"khong di duoc");
		cout<<"\nSo o loang duoc "<<bfs(6,3);
	}
};

int main()
{
	mecung M;
	M.sol();
	
}


