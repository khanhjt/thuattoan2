//Tichpx - day con don dieu tang dai nhat
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	vector<int> C;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(C.empty() or C.back()<a) C.push_back(a);
		else
		{
			auto it=lower_bound(C.begin(),C.end(),a);
			//auto it=upkper_bound(C.begin(),C.end(),a);
			*it=a;
		}
	}
	cout<<C.size();
}


