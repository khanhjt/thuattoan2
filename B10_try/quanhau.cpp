//Tichpx - vesion 2
#include<bits/stdc++.h>
using namespace std;
map<int,bool> C,A,B;   //C-cot, A-duong cheo chinh, B - duong cheo phu
int dem=0;
void TRY(int *x,int k,int n) //gs da co x1...xk
{
	if(k==n) 
	{
		cout<<"\n"<<++dem<<" : "; 
		for(int i=1;i<=k;i++) cout<<"("<<i<<","<<x[i]<<") "; 
		return;
	}
	for(int t=1;t<=n;t++)
	if(C[t]==0 && A[k+1-t]==0 && B[k+1+t]==0 )
	{
		x[k+1]=t; 
		C[t]= A[k+1-t]= B[k+1+t]=1;
		TRY(x,k+1,n);
		C[t]= A[k+1-t]= B[k+1+t]=0;
	}
}
int main()
{
	int n=4,x[1000];
	cin>>n;
//	A[0]=1; B[n+1]=1;
	TRY(x,0,n);
}


