//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> diem;
#define x first
#define y second

diem timdiem(diem A,diem B,diem C)
{
	while(abs(A.x-B.x)>1e-4 or abs(A.y-B.y)>1e-4)
	{
		M={(A.x+B.x)/2,(A.y+B.y)/2};
		(A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y)>(B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y)?A=M:B=M;
	}
	return A
}
int main()
{
	diem A,B,C,M;
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
	M=timdiem(A,B,C);
	cout<<setprecision(3)<<fixed<<M.x<<" "<<M.y;
}


