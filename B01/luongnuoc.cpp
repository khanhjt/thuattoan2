//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0;
	cin>>n; 
	int a[n+5],L[n+5],R[n+5];
	for(int i=1;i<=n;i+) cin>>a[i];
	
	L[1]=a[1];
	for(int i=2;i<=n;i++) L[i]=max(L[i-1],a[i]);
	
	R[n]=a[n];
	for(int i=n-1;i>=1;i--) R[i]=max(R[i+1],a[i]);
	
	for(int i=2;i<n;i++) 
	{
		int t=min(L[i-1],R[i+1]);
		if(t>a[i]) res+=t-a[i];
	}
	cout<<res;
}


