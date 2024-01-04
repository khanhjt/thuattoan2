//Tichpx
#include<bits/stdc++.h>
using namespace std;
struct money
{
	int n,a[100],M,res=INT_MAX;
	vector<int> x,pa;
	void sol()
	{
		cin>>n;
		x.resize(n);
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>M;
		TRY(0,0,0);
		if(res==INT_MAX) cout<<"khong doi duoc"; 
		else 
		{
			cout<<"so to "<<res<<"\n";
			for(int i=0;i<n;i++) cout<<pa[i]<<" to "<<a[i]<<"\n"; 
		}
	}
	void TRY(int k,int T,int t) //gia su doi duoc x0...x[k-1] loai tong tien T, tong to t
	{
		if(k-1==n-2) 
		{
			if((M-T)%a[k]==0) {x[k]=(M-T)/a[k]; if(res>t+x[k]){res=t+x[k];pa=x;}} 
			return;
		}
		for(int xx=0;xx<=(M-T)/a[k] and xx+t<res; xx++) {x[k]=xx;TRY(k+1,T+xx*a[k],t+xx);}
	}
};
int main()
{
	money M; M.sol();
}


