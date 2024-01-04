//Tichpx - 
#include<bits/stdc++.h>
using namespace std;
int dem=0;
void TRY(int *x,int k,int T,int n,int M)//gs x[1]+...+x[k]=T
{
	if(k==n-1)
	{
		x[n]=M-T;
		for(int i=1;i<=n;i++) cout<<x[i]<<(i<n?"+":"=");
		cout<<M<<"\n";
		dem++;
	}
	else for(x[k+1]=0;x[k+1]<=M-T;x[k+1]++) TRY(x,k+1,T+x[k+1],n,M);
}

int main()
{
	int x[100],n,M;
	cin>>n>>M;
	TRY(x,0,0,n,M);
	cout<<dem;
}


