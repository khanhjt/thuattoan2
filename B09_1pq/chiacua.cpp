//Tichpx - chia cua
#include<bits/stdc++.h>
using namespace std;
string pa;
void TRY(int k,int n,int *a,int A,int B,int &res,string x) //gia su x0...x[k-1]
{
	if(res<2) return;
	if(k==n) {if (res > abs(A-B)) {res=abs(A-B); pa=x;};return;}
	TRY(k+1,n,a,A+a[k],B,res,x+"1");
	TRY(k+1,n,a,A,B+a[k],res,x+"0");
}
int main()
{
	int n,a[1000],res=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	TRY(0,n,a,0,0,res,"");
	cout<<res<<"\n"<<pa;
}


