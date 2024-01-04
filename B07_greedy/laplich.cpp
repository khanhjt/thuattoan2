//Tichpx
#include<bits/stdc++.h>
using namespace std;
#define bd second
#define kt first
int main()
{
	int n,t=-INT_MAX,s=0;
	cin>>n;
	vector<pair<int,int>> A(n);
	for(auto &x:A) cin>>x.bd>>x.kt;
	sort(A.begin(),A.end());
	for(auto x:A)
	if(x.bd>=t) 
	{
		s++; 
		t=x.kt;
	}
	cout<<s;
}


