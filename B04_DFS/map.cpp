//Tichpx - map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> M={{3,7},{5,8},{-2,9},{1,3}}; 
	//unordered_map<int,int> M={{3,7},{5,8},{-2,9},{1,3}}; 
	cout<<M[1]<<"\n";
	cout<<M[-2]<<"\n";
	M[5]=4;
	M[10]=9;
	M[7]=7;
	M[1]=6;
	for(auto m:M) cout<<"\n"<<m.first<<" "<<m.second;
}


