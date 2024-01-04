//Tichpx - thu hoach ca chua
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,s=0,k;
	cin>>n>>k;
	long a[n];
	for(auto &x:a) cin>>x;
	sort(a,a+n,greater<int>());
	for(int i=0;i<n && a[i]>i*k;i++) s+=a[i]-i*k;
	cout<<s;
}


