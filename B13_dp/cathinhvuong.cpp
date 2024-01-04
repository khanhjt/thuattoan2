//Tichpx
#include<bits/stdc++.h>
using namespace std;
int C[100][100],P[100][100];
void trace(int n,int m,string p="\n")
{
	if(n!=m) {if(P[n][m]>0) trace(P[n][m],m,p+"\t"); else trace(n,-P[n][m],p+"\t");}
	cout<<p<<n<<"*"<<m;
	if(n!=m) {if(P[n][m]>0) trace(n-P[n][m],m,p+"\t"); else trace(n,m+P[n][m],p+"\t");}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) {C[i][1]=i; P[i][1]=1;}
	for(int j=1;j<=m;j++) {C[1][j]=j; P[1][j]=-1;}
	
	for(int i=2;i<=n;i++) 
		for(int j=2;j<=m;j++) 
		if(i==j) C[i][j]=1;
		else
		{
			C[i][j]=i*j;
			for(int k=1;k<=i/2;k++) if(C[i][j]>C[k][j]+C[i-k][j]) {C[i][j]=C[k][j]+C[i-k][j]; P[i][j]=k;}
			for(int k=1;k<=j/2;k++) if(C[i][j]>C[i][k]+C[i][j-k]) {C[i][j]=C[i][k]+C[i][j-k]; P[i][j]=-k;}
		}
	cout<<"\nso hinh vuong it nhat "<<C[n][m]<<"\n\n";
	trace(n,m);	
}


