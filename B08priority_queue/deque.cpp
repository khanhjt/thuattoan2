//Tichpx - deque
#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
//	deque<int> Q;
	list<int> Q;
	for(int i=1;i<10;i++) if(i%2) Q.push_front(i); else Q.push_back(i);
	
//	while(Q.size())
//	{
//		cout<<Q.front()<<" ";
//		Q.pop_front();
//	}
	for(int x:Q) cout<<x<<" ";
} 


