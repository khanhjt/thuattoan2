//Tichpx - leo thang
#include<bits/stdc++.h>
using namespace std;
void TRY(int T,int n,int &res)
{
	if(T==n) {res++; return;}
	for(int t=1;t<=3 and t+T<=n;t++) TRY(T+t,n,res);
}
int main()
{
	int n,res=0;
	cin>>n;
	TRY(0,n,res);
	cout<<res;
}


