//Tichpx
#include<bits/stdc++.h>
using namespace std;
bool ss(int a,int b) {return a%2<b%2;}
int main()
{
	int a[]={42,24,35,43,645,7,47,2,436,456},n=sizeof(a)/sizeof(int);
	sort(a,a+n,ss);
	for(int x:a) cout<<x<<" ";
}


