//Tichpx - Tree
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int a,b,elem; //quan ly elem=max(a[a]....a[b-1])
	node *left,*right;
	node(int u,int v)
	{
		a=u;	b=v; elem=-INT_MAX;
		if(u+1==v) left=right=NULL;
		else {left = new node(a,(a+b)/2); right=new node((a+b)/2,b);}
	}
};
void update(node *H,int i,int x)
{
	if(H->elem<x) H->elem=x;
	if(H->left) update(i<H->left->b?H->left:H->right,i,x);
}
int get(node *H,int L,int R)
{
	if(H->a==L && H->b==R) return H->elem;
	if(R<=H->left->b) return get(H->left,L,R);
	if(L>=H->right->a) return get(H->right,L,R);
	return max(get(H->left,L,H->left->b),get(H->right,H->right->a,R));
}
int main()
{
	int n,x,L,R,m;
	cin>>n>>m;
	node *root=new node(1,n+1);
	for(int i=1;i<=n;i++) {cin>>x; update(root,i,x);}
	while(m--)
	{
		cin>>L>>R;
		cout<<get(root,L,R)<<"\n";
	}
}


