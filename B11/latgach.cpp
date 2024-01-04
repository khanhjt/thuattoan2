//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long C[n+5]={0,1,2,4};
	for(int i=3;i<=n;i++) C[i]=C[i-1]+C[i-2];
	cout<<C[n];
}


