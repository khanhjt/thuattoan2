//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,3,4};
	do
	{
		for(int x:a) cout<<x<<" ";
		cout<<"\n";
	}
	while(next_permutation(a,a+4));
	
}


