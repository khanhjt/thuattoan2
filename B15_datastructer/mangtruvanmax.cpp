//Tichpx  Truy van max
#include<bits/stdc++.h>
using namespace std;
int A[400005];   //Mang A quan ly ca cay 
void update(int k,int a,int b,int i,int x) //A[k] quan ly doan [a,b) up date a[i]=x
{
	if(x>A[k]) A[k]=x;
	if(a+1==b) return;
	if(i<(a+b)/2) update(2*k+1,a,(a+b)/2,i,x);
	else update(2*k+2,(a+b)/2,b,i,x);
}
int get(int k,int a,int b,int L,int R) //tim max(a[L]...a[R-1]) tren cay A[k] quan ly doan [a,b)
{
	if(L==a and R==b) return A[k];
	if(R<=(a+b)/2) return get(2*k+1,a,(a+b)/2,L,R);
	if(L>=(a+b)/2) return get(2*k+2,(a+b)/2,b,L,R);
	return max(get(2*k+1,a,(a+b)/2,L,(a+b)/2),get(2*k+2,(a+b)/2,b,(a+b)/2,R));
}
int main()
{
	int n,x,m,L,R;
	cin>>n>>m;
	fill(A,A+4*n+1,-INT_MAX);
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		update(0,1,n+1,i,x);
	}
	while(m--)
	{
		cin>>L>>R;
		cout<<get(0,1,n+1,L,R+1)<<"\n";
	}
}


