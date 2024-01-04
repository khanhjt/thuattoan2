//Tichpx - sinh hoan vi sao cho 2 so canh nhau tong khong chia het cho 4
#include<bits/stdc++.h>
using namespace std;
int d[1000]={};
int dem=0;
void TRY(int *x,int k,int n) //gs da co x1...xk
{
	if(k==n) {dem++; for(int i=1;i<=k;cout<<x[i++]<<" "); cout<<"\n"; return;}
	for(int t=1;t<=n;t++)
	if(d[t]==0 and (k==0 or (t+x[k])%4!=0))
	{
		x[k+1]=t; 
		d[t]=1;
		TRY(x,k+1,n);
		d[t]=0;        //lui
	}
}
int main()
{
	int n=6,x[1000];
	//cin>>n;
	TRY(x,0,n);
	cout<<dem;
}


