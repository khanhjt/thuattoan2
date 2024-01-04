//Tichpx - sinh cac day nhi phan do dai n
#include<bits/stdc++.h>
using namespace std;
void TRY(int *x,int k,int n) //gia su da co x1...xk-1
{
	if(k-1==n) 
	{
		for(int i=1;i<k;i++) cout<<x[i]<<" ";
		cout<<"\n";
		return;
	}
	for(int t=0;t<=1;t++) {x[k]=t; TRY(x,k+1,n);}
}
int main()
{
	int x[1000],n;
	cin>>n;
	TRY(x,1,n);
}


