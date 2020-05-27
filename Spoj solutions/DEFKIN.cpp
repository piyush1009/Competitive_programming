#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w,h,n;
		cin>>w>>h>>n;
		int p[n+5],q[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>q[i];
		}
		sort(p,p+n);
		sort(q,q+n);
		p[n]=w+1;q[n]=h+1;
		int maxx=p[0],minn=q[0];
		for(int i=1;i<=n;i++)
		{
			maxx=max(maxx,p[i]-p[i-1]);
			minn=max(minn,q[i]-q[i-1]);
		}
		cout<<(maxx-1)*(minn-1)<<endl;
	}
}
