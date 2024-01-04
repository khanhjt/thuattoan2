//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> M={{"ha noi",29},{"thanh hoa",36},{"nam dinh",18},{"quang ninh",14}};
	string s;
	cout<<M.size()<<"\n";
	if(M["ha tay"]) cout<<"ha tay";
	else cout<<"khong co ha tay";
	cout<<M.size()<<"\n";
	if(M["ha tay"]) cout<<"ha tay";
	else cout<<"khong co ha tay";
	cout<<"\n"<<M["ha tay"];	

//	while(1)
//	{
//		cout<<"\nMoi ban nhap ten tinh : ";
//		fflush(stdin);
//		getline(cin,s);
//		if(M.find(s)==M.end()) cout<<"\nkhong tim thay";
//		else cout<<"\nMa tinh "<<M[s];
//	}
}


