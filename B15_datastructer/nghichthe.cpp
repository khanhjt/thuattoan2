//Tichpx
#include<bits/stdc++.h>
using namespace std;
int A[400005]={};
long long res=0;
void update(int k,int a,int b,int x)  //A[k] quan ly [a,b) cap nhat x
{
	A[k]++;
	if(a+1<b)
	{
		if(x<(a+b)/2) {res+=A[2*k+2]; update(2*k+1,a,(a+b)/2,x);}
		else update(2*k+2,(a+b)/2,b,x);
	}
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		update(0,1,n+1,x);
	}
	cout<<res;
}


