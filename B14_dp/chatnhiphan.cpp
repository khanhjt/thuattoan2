//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={3,5,7,7,7,9,12,23,23,35,37}, n=sizeof(a)/sizeof(int);
//	int *p=lower_bound(a,a+n,10);  //tra ve con tro tro den phan tu dau tien >=
	int *p=upper_bound(a,a+n,7);  //tra ve con tro tro den phan tu dau tien >
	cout<<"vi tri so 7 : "<<p-a;
}


