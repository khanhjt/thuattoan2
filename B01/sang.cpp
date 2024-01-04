//Tichpx - sang so nguyen to Eratosthene
#include<bits/stdc++.h>
using namespace std;
list<int> eratos(int n)
{
	list<int> P;
	bool S[n+5]={} ; //khai bao mang toan false (0)
	for(int i=2;i<=n;i++)
	if(S[i]==0)
	{
		P.push_back(i);
		for(int j=i*i;j<=n;j+=i) S[j]=1;
	}
	return P;
}
int main()
{
	int n;
	cin>>n;
	list<int> Q;
	Q=eratos(n);
	for(int x:Q) cout<<x<<" ";
}


