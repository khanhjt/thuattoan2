//Tichpx - vesion 2
#include<bits/stdc++.h>
using namespace std;
int d[1000]={};
void TRY(int *x,int k,int n) //gs da co x1...xk
{
	if(k==n) {for(int i=1;i<=k;cout<<x[i++]<<" "); cout<<"\n"; return;}
	for(int t=1;t<=n;t++)
	if(d[t]==0)
	{
		x[k+1]=t; 
		d[t]=1;
		TRY(x,k+1,n);
		d[t]=0;        //lui
	}
}
int main()
{
	int n=11,x[1000];
	//cin>>n;
	TRY(x,0,n);
}


