//Tichpx - cai dat hang doi uu tien bang mang
#include<bits/stdc++.h>
using namespace std;
template <class T, class K=greater<T> >
struct PQ        //priority_queue
{
	T *buf;      
	int n,cap;   //n-size, cap=capacity
	K cmp;
	PQ() {n=cap=0; buf=NULL;}
	~PQ() {if(buf) delete []buf;}
	int size() {return n;}
	bool empty() {return n==0;}
	T top() {return buf[0];}
	void heapfy_down(int k)
	{
		if(2*k+1>n) return;
		int p=2*k+1;
		if (p+1<n && cmp(buf[p+1],buf[p])) p++;
		if (cmp(buf[p],buf[k])) {swap(buf[k],buf[p]); heapfy_down(p);}
	}
	void pop()
	{
		buf[0]=buf[--n];
		heapfy_down(0);
	}
	void push(T x)
	{
		if(n==cap)
		{
			T*tem=buf;
			cap=cap*2+1;
			buf = new T[cap];
			for(int i=0;i<n;i++) buf[i]=tem[i];
			if(tem) delete[]tem;
		}
		buf[n++]=x;
		int k=n-1; 
		while(k>0 && cmp(buf[k],buf[(k-1)/2])) {swap(buf[k],buf[(k-1)/2]); k=(k-1)/2;}
	}
};

int main()
{	
	PQ<int> Q;
	int a[]={42,23,3657,4231,67,52,89,78,97,19,68,235,46,47,47,46,6462513,5,346},n=sizeof(a)/sizeof(int);
	for (int x:a) Q.push(x);
	cout<<"\n";
	while(Q.size()) {cout<<Q.top()<<" "; Q.pop();} 

}


