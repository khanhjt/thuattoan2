//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
int main()
{
	Diem A,B,C,D,*E;
	A.first=5;
	A.second=7;
	B=A;
	C=make_pair(4,6);
	D={3,5};
	E=&D;
	cout<<E->first<<" "<<E->second<<"\n";
	for(int x:{4,7,2,8}) cout<<x<<" ";
}


