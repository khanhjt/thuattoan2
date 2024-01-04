//Tichpx - day con lien tuc co tong lon nhat
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=-INT_MAX;
	cin>>n;
	int a[n+5],c[n+5],L=1,R=1,k=1;
	for(int i=1;i<=n;i++) cin>>a[i];
	res=c[1]=a[1];
	for(int i=2;i<=n;i++) 
	{
		c[i]=max(c[i-1],0)+a[i];
		if(res<c[i]) {res=c[i]; L=k; R=i;}
		if(c[i]<0) k=i+1;
	}
	cout<<res<<" tu "<<L<<" den "<<R;
}


