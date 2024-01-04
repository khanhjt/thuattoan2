//Tichpx - cai dat hang doi uu
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={42,23,3657,4231,67,52,89,78,97,19,68},n=sizeof(a)/sizeof(int);
	
	make_heap(a,a+n);
	for(int x:a) cout<<x<<" ";
}


