//Tichpx
#include<bits/stdc++.h>
using namespace std;

double hinhthang(double a,double b,double f(double))
{
	int n=1e6;
	double h=(b-a)/n,I=f(a)+f(b);
	for(int i=1;i<n;i++) I+=2*f(a+i*h);
	return I*h/2;		
}
double ff(double x) {return 3*x*x+2*x;}
double f2(double x) {return 4/(x*x+1);}
int main()
{
	cout<<setprecision(20)<<fixed;
	cout<<hinhthang(0,10,ff);
	cout<<"\nPi = "<<hinhthang(0,1,f2);
	cout<<"\nPI = "<<acos(-1);
	cout<<"\nxin = "<<hinhthang(0,acos(-1),sin);
}


