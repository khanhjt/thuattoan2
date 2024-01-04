//Tichpx - hang doi uu tien
#include<bits/stdc++.h>
using namespace std;

struct cmp
{
	bool operator()(int a,int b) {return a%2==b%2?a>b:a%2>b%2;}
};

int main()
{
	int a[]={23,52,464,67,658,67,52,36,476,36};
//	priority_queue<int> Q;
//	priority_queue<int,vector<int>,greater<int> > Q;
	priority_queue<int,vector<int>,cmp > Q;
	for(int x:a) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
	
}


