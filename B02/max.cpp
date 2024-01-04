//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={25,423,43,63,7,47,4,7,8,4,47,2,623,654,86,11};
	
	int n=sizeof(a)/sizeof(int);
	
	int *p=max_element(a+3,a+10);  //max(a[0],...,a[n-1])
	cout<<*p<<"tai vi tri "<<p-a;
	//multiset<int> S;      //cay tim kiem nhi phan 
	unordered_set<int> S;   //bang bam 
	for(int x:a) S.insert(x);
	//cout<<"\nMax cua day "<<*S.rbegin();
	cout<<"\nSet : ";
	for(auto s:S) cout<<s<<" ";
}


