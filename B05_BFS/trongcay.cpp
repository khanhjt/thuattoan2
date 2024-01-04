//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x; //nhap a[0]...a[n-1]
	sort(a,a+n,greater<int>()); //sap xep giam dan
	for(int i=0;i<n;i++) a[i]+=i;
	cout<<*max_element(a,a+n)+2;
}


