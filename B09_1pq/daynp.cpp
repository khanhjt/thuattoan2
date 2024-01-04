//Tichpx
#include<bits/stdc++.h>
using namespace std;
void TRY(string x,int n)
{
	if(x.size()==n) cout<<x<<"\n";
	else for(char c:{'0','1'}) TRY(x+c,n);
}
int main()
{
	int n;
	cin>>n;
	TRY("",n);
}


